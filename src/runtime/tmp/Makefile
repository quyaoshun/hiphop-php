PROJECT_ROOT=$(HPHP_HOME)

override OUTDIR_BY_TYPE=
override OUTPUT_ROOT=

MONO_TARGETS = run
TARGETS = $(MONO_TARGETS)

TEST_DIRS = $(wildcard Test*)

.PHONY : all
all : $(TEST_DIRS) $(TARGETS) run.sh

.PHONY : $(TEST_DIRS)
$(TEST_DIRS):
	@cp $(PROJECT_ROOT)/bin/CMakeLists.base.txt $@/CMakeLists.txt
	@cd $@ && cmake . && $(MAKE)

run.sh :
	@$(MAKE) -f script.mk
	@chmod +x $@

# Build a dummy libtest.so with just the 'main' symbol defined.
# This is so we can link, dynamically, against it here and then
# use LD_LIBRARY_PATH to use different libtest.so's when running
# the tests.
LDFLAGS += -L. -ltest
libtest.so: test.c
	$(CC) -o libtest.so -Wl,-soname,libtest.so -shared test.c
run: libtest.so

TMP = $(TEST_DIRS) \
      $(MONO_TARGETS) run.sh

clobber : clean

clean :
	@rm -fR $(TMP)

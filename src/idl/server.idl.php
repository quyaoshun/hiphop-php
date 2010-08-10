<?php
/**
 * Automatically generated by running "php schema.php server".
 *
 * You may modify the file, but re-running schema.php against this file will
 * standardize the format without losing your schema changes. It does lose
 * any changes that are not part of schema. Use "note" field to comment on
 * schema itself, and "note" fields are not used in any code generation but
 * only staying within this file.
 */
///////////////////////////////////////////////////////////////////////////////
// Preamble: C++ code inserted at beginning of ext_{name}.h

DefinePreamble(<<<CPP

CPP
);

///////////////////////////////////////////////////////////////////////////////
// Constants
//
// array (
//   'name' => name of the constant
//   'type' => type of the constant
//   'note' => additional note about this constant's schema
// )


///////////////////////////////////////////////////////////////////////////////
// Functions
//
// array (
//   'name'   => name of the function
//   'desc'   => description of the function's purpose
//   'flags'  => attributes of the function, see base.php for possible values
//   'opt'    => optimization callback function's name for compiler
//   'note'   => additional note about this function's schema
//   'return' =>
//      array (
//        'type'  => return type, use Reference for ref return
//        'desc'  => description of the return value
//      )
//   'args'   => arguments
//      array (
//        'name'  => name of the argument
//        'type'  => type of the argument, use Reference for output parameter
//        'value' => default value of the argument
//        'desc'  => description of the argument
//      )
// )

DefineFunction(
  array(
    'name'   => "dangling_server_proxy_old_request",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
  ));

DefineFunction(
  array(
    'name'   => "dangling_server_proxy_new_request",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
    'args'   => array(
      array(
        'name'   => "host",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "pagelet_server_is_enabled",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
  ));

DefineFunction(
  array(
    'name'   => "pagelet_server_task_start",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Resource,
    ),
    'args'   => array(
      array(
        'name'   => "url",
        'type'   => String,
      ),
      array(
        'name'   => "headers",
        'type'   => StringMap,
        'value'  => "null_array",
      ),
      array(
        'name'   => "post_data",
        'type'   => String,
        'value'  => "null_string",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "pagelet_server_task_status",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
    'args'   => array(
      array(
        'name'   => "task",
        'type'   => Resource,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "pagelet_server_task_result",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => String,
    ),
    'args'   => array(
      array(
        'name'   => "task",
        'type'   => Resource,
      ),
      array(
        'name'   => "headers",
        'type'   => Variant | Reference,
      ),
      array(
        'name'   => "code",
        'type'   => Variant | Reference,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "xbox_send_message",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
    'args'   => array(
      array(
        'name'   => "msg",
        'type'   => String,
      ),
      array(
        'name'   => "ret",
        'type'   => Variant | Reference,
      ),
      array(
        'name'   => "timeout_ms",
        'type'   => Int64,
      ),
      array(
        'name'   => "host",
        'type'   => String,
        'value'  => "\"localhost\"",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "xbox_post_message",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
    'args'   => array(
      array(
        'name'   => "msg",
        'type'   => String,
      ),
      array(
        'name'   => "host",
        'type'   => String,
        'value'  => "\"localhost\"",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "xbox_task_start",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Resource,
    ),
    'args'   => array(
      array(
        'name'   => "message",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "xbox_task_status",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
    ),
    'args'   => array(
      array(
        'name'   => "task",
        'type'   => Resource,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "xbox_task_result",
    'flags'  =>  HipHopSpecific,
    'return' => array(
      'type'   => Int64,
    ),
    'args'   => array(
      array(
        'name'   => "task",
        'type'   => Resource,
      ),
      array(
        'name'   => "timeout_ms",
        'type'   => Int64,
      ),
      array(
        'name'   => "ret",
        'type'   => Variant | Reference,
      ),
    ),
  ));


///////////////////////////////////////////////////////////////////////////////
// Classes
//
// BeginClass
// array (
//   'name'   => name of the class
//   'desc'   => description of the class's purpose
//   'flags'  => attributes of the class, see base.php for possible values
//   'note'   => additional note about this class's schema
//   'parent' => parent class name, if any
//   'ifaces' => array of interfaces tihs class implements
//   'bases'  => extra internal and special base classes this class requires
//   'footer' => extra C++ inserted at end of class declaration
// )
//
// DefineConstant(..)
// DefineConstant(..)
// ...
// DefineFunction(..)
// DefineFunction(..)
// ...
// DefineProperty
// DefineProperty
//
// array (
//   'name'  => name of the property
//   'type'  => type of the property
//   'flags' => attributes of the property
//   'desc'  => description of the property
//   'note'  => additional note about this property's schema
// )
//
// EndClass()


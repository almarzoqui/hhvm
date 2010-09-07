/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ReflectionException_h__
#define __GENERATED_cls_ReflectionException_h__

#include <cls/Exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 27 */
class c_ReflectionException : public c_Exception {
  public:

  // Properties

  // Class Map
  BEGIN_CLASS_MAP(ReflectionException)
    PARENT_CLASS(Exception)
  END_CLASS_MAP(ReflectionException)
  DECLARE_CLASS_COMMON(ReflectionException, ReflectionException)
  DECLARE_INVOKE_EX(ReflectionException, ReflectionException, Exception)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_ReflectionException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_get_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_get_PRIVATE_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_set_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_set_PRIVATE_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_lval_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_ReflectionException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_ReflectionException 1
  #define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_ReflectionException 1

  // DECLARE_COMMON_INVOKE
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ReflectionException 1
  virtual Variant o_invoke(MethodIndex methodIndex, const char *s, CArrRef ps,
                           int64 h, bool f = true);
  virtual Variant o_invoke_few_args(MethodIndex methodIndex, const char *s,
                                    int64 h, int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
};
extern struct ObjectStaticCallbacks cw_ReflectionException;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionException_h__

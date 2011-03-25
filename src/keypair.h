#ifndef __NODE_DCRYPT_KEYPAIR_H__
#define __NODE_DCRYPT_KEYPAIR_H__

#include <v8.h>
#include <node.h>
#include <node_object_wrap.h>
#include <node_buffer.h>

#include <openssl/evp.h>
#include <openssl/ecdsa.h>
#include <openssl/err.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "common.h"

class KeyPair: node::ObjectWrap {
  public:
    static Persistent<FunctionTemplate> constructor;
    static void Initialize(Handle<Object> target);
    KeyPair();

  protected:
    static Handle<Value> New(const Arguments &args);
    static Handle<Value> New_RSA_KeyPair(const Arguments &args);
    static Handle<Value> New_ECDSA_KeyPair(const Arguments &args);
  private:
    ~KeyPair();
};
#endif

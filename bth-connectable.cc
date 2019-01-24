// hello.cc
#include <node.h>

namespace bthconnectable {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::NewStringType;
using v8::Object;
using v8::String;
using v8::Value;
//BluetoothAPIs.h depends on these.
#include <Winsock2.h>
#include <Ws2bth.h>

#include <BluetoothAPIs.h>
#pragma comment(lib, "Bthprops.lib")


void IsConnectable(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(BluetoothIsConnectable(0));
}

void Initialize(Local<Object> exports) {
  NODE_SET_METHOD(exports, "connectable", IsConnectable);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

}

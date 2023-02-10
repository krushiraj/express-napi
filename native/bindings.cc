#include <napi.h>

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
  exports.Set(Napi::String::New(env, "author"),
              Napi::String::New(env, "Krushi Raj Tula"));

  return exports;
}

NODE_API_MODULE(addon, Init)

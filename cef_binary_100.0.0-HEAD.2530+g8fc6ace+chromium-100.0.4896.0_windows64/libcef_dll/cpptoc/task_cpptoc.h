// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=a22ba7af43964082c9e8570da140389ca9953a12$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_TASK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_TASK_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_task_capi.h"
#include "include/cef_task.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefTaskCppToC
    : public CefCppToCRefCounted<CefTaskCppToC, CefTask, cef_task_t> {
 public:
  CefTaskCppToC();
  virtual ~CefTaskCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_TASK_CPPTOC_H_

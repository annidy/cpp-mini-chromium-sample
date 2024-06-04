// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <iostream>
#include "base/logging.h"
#include "base/files/file_path.h"

#include "hello_static.h"

using namespace std;

int main(int argc, char* argv[]) {
  LOG(INFO) << argv[0] << "\n";
  cout << "Hello, " << GetStaticText() << " " << GetStaticNumber() << endl;

  base::FilePath path("/test/abc");
  LOG(INFO) << path.BaseName() << " " << path.Append("hello.cc");
  
  return 0;
}

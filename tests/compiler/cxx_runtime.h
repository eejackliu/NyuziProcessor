// 
// Copyright 2013 Jeff Bush
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 

//
// Symbols that need to be defined to use C++.  These are stubs and don't
// actually do anything
//

namespace __cxxabiv1
{
	class __class_type_info
	{
	public:
		__class_type_info() {}
		virtual ~__class_type_info() {}
	};

	class __si_class_type_info
	{
	public:
		__si_class_type_info() {}
		virtual ~__si_class_type_info() {}
	};

	__class_type_info cti;
	__si_class_type_info sicti;
}   

void operator delete(void *ptr) throw()
{
}

void *__dso_handle;

extern "C" void __cxa_atexit(void (*f)(void *), void *objptr, void *dso)
{
}
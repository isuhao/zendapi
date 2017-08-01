// Copyright 2017-2018 zzu_softboy <zzu_softboy@163.com>
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Created by zzu_softboy on 2017/08/01.

#ifndef ZAPI_VM_ABSTRACT_CLASS_PRIVATE_H
#define ZAPI_VM_ABSTRACT_CLASS_PRIVATE_H

#include "zapi/Global.h"
#include <string>

namespace zapi
{
namespace vm
{

class AbstractClass;
using zapi::lang::ClassType;

namespace internal
{

class AbstractClassPrivate
{
public:
   std::unique_ptr<AbstractClass> m_apiPtr;
   std::string m_name;
   ClassType m_type = ClassType::Regular;
   zend_class_entry *m_classEntry = nullptr;
   zend_function_entry *m_funcEntries = nullptr;
};

} // internal
} // vm
} // zapi

#endif
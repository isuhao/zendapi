// Copyright 2017-2018 zzu_softboy <zzu_softboy@163.com>
// @author Emiel Bruijntjes <emiel.bruijntjes@copernica.com>
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
// Created by softboy on 18/05/2017.
//


#ifndef ZAPI_LANG_NAMESPACE_H
#define ZAPI_LANG_NAMESPACE_H

#include "zapi/Global.h"

namespace zapi
{
namespace lang
{

namespace internal
{
class NamespacePrivate;
} // internal

using internal::NamespacePrivate;

class ZAPI_DECL_EXPORT Namespace
{
public:
   Namespace(const std::string &name);
   virtual ~Namespace();
   
public:
   void registerConstant();
   void registerFunction();
   void registerNamespace();
private:
   ZAPI_DECLARE_PRIVATE(Namespace)
   std::unique_ptr<NamespacePrivate> m_implPtr;
};

} // lang
} // zapi

#endif // ZAPI_LANG_NAMESPACE_H

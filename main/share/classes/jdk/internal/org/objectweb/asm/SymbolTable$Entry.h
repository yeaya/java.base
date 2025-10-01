#ifndef _jdk_internal_org_objectweb_asm$_SymbolTable$Entry_h_
#define _jdk_internal_org_objectweb_asm$_SymbolTable$Entry_h_
//$ class jdk.internal.org.objectweb.asm.SymbolTable$Entry
//$ extends jdk.internal.org.objectweb.asm.Symbol

#include <jdk/internal/org/objectweb/asm/Symbol.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class SymbolTable$Entry : public ::jdk::internal::org::objectweb::asm$::Symbol {
	$class(SymbolTable$Entry, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::Symbol)
public:
	SymbolTable$Entry();
	void init$(int32_t index, int32_t tag, $String* owner, $String* name, $String* value, int64_t data, int32_t hashCode);
	void init$(int32_t index, int32_t tag, $String* value, int32_t hashCode);
	void init$(int32_t index, int32_t tag, $String* value, int64_t data, int32_t hashCode);
	void init$(int32_t index, int32_t tag, $String* name, $String* value, int32_t hashCode);
	void init$(int32_t index, int32_t tag, int64_t data, int32_t hashCode);
	int32_t hashCode$ = 0;
	::jdk::internal::org::objectweb::asm$::SymbolTable$Entry* next = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_SymbolTable$Entry_h_
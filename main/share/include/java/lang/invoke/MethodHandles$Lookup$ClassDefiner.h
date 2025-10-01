#ifndef _java_lang_invoke_MethodHandles$Lookup$ClassDefiner_h_
#define _java_lang_invoke_MethodHandles$Lookup$ClassDefiner_h_
//$ class java.lang.invoke.MethodHandles$Lookup$ClassDefiner
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
			class MethodHandles$Lookup$ClassFile;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import MethodHandles$Lookup$ClassDefiner : public ::java::lang::Object {
	$class(MethodHandles$Lookup$ClassDefiner, 0, ::java::lang::Object)
public:
	MethodHandles$Lookup$ClassDefiner();
	void init$(::java::lang::invoke::MethodHandles$Lookup* lookup, ::java::lang::invoke::MethodHandles$Lookup$ClassFile* cf, int32_t flags);
	virtual $String* className();
	virtual $Class* defineClass(bool initialize);
	virtual $Class* defineClass(bool initialize, Object$* classData);
	virtual ::java::lang::invoke::MethodHandles$Lookup* defineClassAsLookup(bool initialize);
	virtual ::java::lang::invoke::MethodHandles$Lookup* defineClassAsLookup(bool initialize, Object$* classData);
	bool isNestmate();
	static bool $assertionsDisabled;
	::java::lang::invoke::MethodHandles$Lookup* lookup = nullptr;
	$String* name = nullptr;
	$bytes* bytes = nullptr;
	int32_t classFlags = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandles$Lookup$ClassDefiner_h_
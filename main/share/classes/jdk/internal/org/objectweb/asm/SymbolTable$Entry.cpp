#include <jdk/internal/org/objectweb/asm/SymbolTable$Entry.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

void SymbolTable$Entry::init$(int32_t index, int32_t tag, $String* owner, $String* name, $String* value, int64_t data, int32_t hashCode) {
	$Symbol::init$(index, tag, owner, name, value, data);
	this->hashCode$ = hashCode;
}

void SymbolTable$Entry::init$(int32_t index, int32_t tag, $String* value, int32_t hashCode) {
	$Symbol::init$(index, tag, nullptr, nullptr, value, 0);
	this->hashCode$ = hashCode;
}

void SymbolTable$Entry::init$(int32_t index, int32_t tag, $String* value, int64_t data, int32_t hashCode) {
	$Symbol::init$(index, tag, nullptr, nullptr, value, data);
	this->hashCode$ = hashCode;
}

void SymbolTable$Entry::init$(int32_t index, int32_t tag, $String* name, $String* value, int32_t hashCode) {
	$Symbol::init$(index, tag, nullptr, name, value, 0);
	this->hashCode$ = hashCode;
}

void SymbolTable$Entry::init$(int32_t index, int32_t tag, int64_t data, int32_t hashCode) {
	$Symbol::init$(index, tag, nullptr, nullptr, nullptr, data);
	this->hashCode$ = hashCode;
}

SymbolTable$Entry::SymbolTable$Entry() {
}

$Class* SymbolTable$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hashCode", "I", nullptr, $FINAL, $field(SymbolTable$Entry, hashCode$)},
		{"next", "Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;", nullptr, 0, $field(SymbolTable$Entry, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;JI)V", nullptr, 0, $method(SymbolTable$Entry, init$, void, int32_t, int32_t, $String*, $String*, $String*, int64_t, int32_t)},
		{"<init>", "(IILjava/lang/String;I)V", nullptr, 0, $method(SymbolTable$Entry, init$, void, int32_t, int32_t, $String*, int32_t)},
		{"<init>", "(IILjava/lang/String;JI)V", nullptr, 0, $method(SymbolTable$Entry, init$, void, int32_t, int32_t, $String*, int64_t, int32_t)},
		{"<init>", "(IILjava/lang/String;Ljava/lang/String;I)V", nullptr, 0, $method(SymbolTable$Entry, init$, void, int32_t, int32_t, $String*, $String*, int32_t)},
		{"<init>", "(IIJI)V", nullptr, 0, $method(SymbolTable$Entry, init$, void, int32_t, int32_t, int64_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.SymbolTable$Entry", "jdk.internal.org.objectweb.asm.SymbolTable", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.org.objectweb.asm.SymbolTable$Entry",
		"jdk.internal.org.objectweb.asm.Symbol",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.SymbolTable"
	};
	$loadClass(SymbolTable$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SymbolTable$Entry);
	});
	return class$;
}

$Class* SymbolTable$Entry::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
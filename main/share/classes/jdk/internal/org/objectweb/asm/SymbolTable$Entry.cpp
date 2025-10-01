#include <jdk/internal/org/objectweb/asm/SymbolTable$Entry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _SymbolTable$Entry_FieldInfo_[] = {
	{"hashCode", "I", nullptr, $FINAL, $field(SymbolTable$Entry, hashCode$)},
	{"next", "Ljdk/internal/org/objectweb/asm/SymbolTable$Entry;", nullptr, 0, $field(SymbolTable$Entry, next)},
	{}
};

$MethodInfo _SymbolTable$Entry_MethodInfo_[] = {
	{"<init>", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;JI)V", nullptr, 0, $method(static_cast<void(SymbolTable$Entry::*)(int32_t,int32_t,$String*,$String*,$String*,int64_t,int32_t)>(&SymbolTable$Entry::init$))},
	{"<init>", "(IILjava/lang/String;I)V", nullptr, 0, $method(static_cast<void(SymbolTable$Entry::*)(int32_t,int32_t,$String*,int32_t)>(&SymbolTable$Entry::init$))},
	{"<init>", "(IILjava/lang/String;JI)V", nullptr, 0, $method(static_cast<void(SymbolTable$Entry::*)(int32_t,int32_t,$String*,int64_t,int32_t)>(&SymbolTable$Entry::init$))},
	{"<init>", "(IILjava/lang/String;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(SymbolTable$Entry::*)(int32_t,int32_t,$String*,$String*,int32_t)>(&SymbolTable$Entry::init$))},
	{"<init>", "(IIJI)V", nullptr, 0, $method(static_cast<void(SymbolTable$Entry::*)(int32_t,int32_t,int64_t,int32_t)>(&SymbolTable$Entry::init$))},
	{}
};

$InnerClassInfo _SymbolTable$Entry_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.SymbolTable$Entry", "jdk.internal.org.objectweb.asm.SymbolTable", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SymbolTable$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.SymbolTable$Entry",
	"jdk.internal.org.objectweb.asm.Symbol",
	nullptr,
	_SymbolTable$Entry_FieldInfo_,
	_SymbolTable$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_SymbolTable$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.SymbolTable"
};

$Object* allocate$SymbolTable$Entry($Class* clazz) {
	return $of($alloc(SymbolTable$Entry));
}

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
	$loadClass(SymbolTable$Entry, name, initialize, &_SymbolTable$Entry_ClassInfo_, allocate$SymbolTable$Entry);
	return class$;
}

$Class* SymbolTable$Entry::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
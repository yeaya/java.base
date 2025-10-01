#include <jdk/internal/icu/impl/Trie2$UTrie2Header.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Trie2 = ::jdk::internal::icu::impl::Trie2;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Trie2$UTrie2Header_FieldInfo_[] = {
	{"signature", "I", nullptr, 0, $field(Trie2$UTrie2Header, signature)},
	{"options", "I", nullptr, 0, $field(Trie2$UTrie2Header, options)},
	{"indexLength", "I", nullptr, 0, $field(Trie2$UTrie2Header, indexLength)},
	{"shiftedDataLength", "I", nullptr, 0, $field(Trie2$UTrie2Header, shiftedDataLength)},
	{"index2NullOffset", "I", nullptr, 0, $field(Trie2$UTrie2Header, index2NullOffset)},
	{"dataNullOffset", "I", nullptr, 0, $field(Trie2$UTrie2Header, dataNullOffset)},
	{"shiftedHighStart", "I", nullptr, 0, $field(Trie2$UTrie2Header, shiftedHighStart)},
	{}
};

$MethodInfo _Trie2$UTrie2Header_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Trie2$UTrie2Header::*)()>(&Trie2$UTrie2Header::init$))},
	{}
};

$InnerClassInfo _Trie2$UTrie2Header_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie2$UTrie2Header", "jdk.internal.icu.impl.Trie2", "UTrie2Header", $STATIC},
	{}
};

$ClassInfo _Trie2$UTrie2Header_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.Trie2$UTrie2Header",
	"java.lang.Object",
	nullptr,
	_Trie2$UTrie2Header_FieldInfo_,
	_Trie2$UTrie2Header_MethodInfo_,
	nullptr,
	nullptr,
	_Trie2$UTrie2Header_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie2"
};

$Object* allocate$Trie2$UTrie2Header($Class* clazz) {
	return $of($alloc(Trie2$UTrie2Header));
}

void Trie2$UTrie2Header::init$() {
}

Trie2$UTrie2Header::Trie2$UTrie2Header() {
}

$Class* Trie2$UTrie2Header::load$($String* name, bool initialize) {
	$loadClass(Trie2$UTrie2Header, name, initialize, &_Trie2$UTrie2Header_ClassInfo_, allocate$Trie2$UTrie2Header);
	return class$;
}

$Class* Trie2$UTrie2Header::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk
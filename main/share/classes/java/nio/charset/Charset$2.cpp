#include <java/nio/charset/Charset$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _Charset$2_FieldInfo_[] = {
	{"val$charsetName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Charset$2, val$charsetName)},
	{}
};

$MethodInfo _Charset$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Charset$2::*)($String*)>(&Charset$2::init$))},
	{"run", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Charset$2_EnclosingMethodInfo_ = {
	"java.nio.charset.Charset",
	"lookupViaProviders",
	"(Ljava/lang/String;)Ljava/nio/charset/Charset;"
};

$InnerClassInfo _Charset$2_InnerClassesInfo_[] = {
	{"java.nio.charset.Charset$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Charset$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.charset.Charset$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Charset$2_FieldInfo_,
	_Charset$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/nio/charset/Charset;>;",
	&_Charset$2_EnclosingMethodInfo_,
	_Charset$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.charset.Charset"
};

$Object* allocate$Charset$2($Class* clazz) {
	return $of($alloc(Charset$2));
}

void Charset$2::init$($String* val$charsetName) {
	$set(this, val$charsetName, val$charsetName);
}

$Object* Charset$2::run() {
	{
		$var($Iterator, i, $Charset::providers());
		for (; $nc(i)->hasNext();) {
			$var($CharsetProvider, cp, $cast($CharsetProvider, i->next()));
			$var($Charset, cs, $nc(cp)->charsetForName(this->val$charsetName));
			if (cs != nullptr) {
				return $of(cs);
			}
		}
	}
	return $of(nullptr);
}

Charset$2::Charset$2() {
}

$Class* Charset$2::load$($String* name, bool initialize) {
	$loadClass(Charset$2, name, initialize, &_Charset$2_ClassInfo_, allocate$Charset$2);
	return class$;
}

$Class* Charset$2::class$ = nullptr;

		} // charset
	} // nio
} // java
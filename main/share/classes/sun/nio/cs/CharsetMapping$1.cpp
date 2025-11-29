#include <sun/nio/cs/CharsetMapping$1.h>

#include <java/io/InputStream.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetMapping = ::sun::nio::cs::CharsetMapping;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _CharsetMapping$1_FieldInfo_[] = {
	{"val$is", "Ljava/io/InputStream;", nullptr, $FINAL | $SYNTHETIC, $field(CharsetMapping$1, val$is)},
	{}
};

$MethodInfo _CharsetMapping$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(CharsetMapping$1::*)($InputStream*)>(&CharsetMapping$1::init$))},
	{"run", "()Lsun/nio/cs/CharsetMapping;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CharsetMapping$1_EnclosingMethodInfo_ = {
	"sun.nio.cs.CharsetMapping",
	"get",
	"(Ljava/io/InputStream;)Lsun/nio/cs/CharsetMapping;"
};

$InnerClassInfo _CharsetMapping$1_InnerClassesInfo_[] = {
	{"sun.nio.cs.CharsetMapping$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CharsetMapping$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.CharsetMapping$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_CharsetMapping$1_FieldInfo_,
	_CharsetMapping$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/nio/cs/CharsetMapping;>;",
	&_CharsetMapping$1_EnclosingMethodInfo_,
	_CharsetMapping$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.CharsetMapping"
};

$Object* allocate$CharsetMapping$1($Class* clazz) {
	return $of($alloc(CharsetMapping$1));
}

void CharsetMapping$1::init$($InputStream* val$is) {
	$set(this, val$is, val$is);
}

$Object* CharsetMapping$1::run() {
	return $of($$new($CharsetMapping)->load(this->val$is));
}

CharsetMapping$1::CharsetMapping$1() {
}

$Class* CharsetMapping$1::load$($String* name, bool initialize) {
	$loadClass(CharsetMapping$1, name, initialize, &_CharsetMapping$1_ClassInfo_, allocate$CharsetMapping$1);
	return class$;
}

$Class* CharsetMapping$1::class$ = nullptr;

		} // cs
	} // nio
} // sun
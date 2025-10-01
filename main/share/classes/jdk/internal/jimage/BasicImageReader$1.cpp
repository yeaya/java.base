#include <jdk/internal/jimage/BasicImageReader$1.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/jimage/BasicImageReader.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $BasicImageReader = ::jdk::internal::jimage::BasicImageReader;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _BasicImageReader$1_FieldInfo_[] = {
	{"val$def", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BasicImageReader$1, val$def)},
	{"val$key", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BasicImageReader$1, val$key)},
	{"val$value", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BasicImageReader$1, val$value)},
	{}
};

$MethodInfo _BasicImageReader$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(BasicImageReader$1::*)($String*,$String*,$String*)>(&BasicImageReader$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicImageReader$1_EnclosingMethodInfo_ = {
	"jdk.internal.jimage.BasicImageReader",
	"isSystemProperty",
	"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z"
};

$InnerClassInfo _BasicImageReader$1_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.BasicImageReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicImageReader$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jimage.BasicImageReader$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BasicImageReader$1_FieldInfo_,
	_BasicImageReader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_BasicImageReader$1_EnclosingMethodInfo_,
	_BasicImageReader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jimage.BasicImageReader"
};

$Object* allocate$BasicImageReader$1($Class* clazz) {
	return $of($alloc(BasicImageReader$1));
}

void BasicImageReader$1::init$($String* val$value, $String* val$key, $String* val$def) {
	$set(this, val$value, val$value);
	$set(this, val$key, val$key);
	$set(this, val$def, val$def);
}

$Object* BasicImageReader$1::run() {
	return $of($Boolean::valueOf($nc(this->val$value)->equals($($System::getProperty(this->val$key, this->val$def)))));
}

BasicImageReader$1::BasicImageReader$1() {
}

$Class* BasicImageReader$1::load$($String* name, bool initialize) {
	$loadClass(BasicImageReader$1, name, initialize, &_BasicImageReader$1_ClassInfo_, allocate$BasicImageReader$1);
	return class$;
}

$Class* BasicImageReader$1::class$ = nullptr;

		} // jimage
	} // internal
} // jdk
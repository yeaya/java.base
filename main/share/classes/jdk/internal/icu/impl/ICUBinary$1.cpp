#include <jdk/internal/icu/impl/ICUBinary$1.h>

#include <java/io/InputStream.h>
#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ICUBinary = ::jdk::internal::icu::impl::ICUBinary;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _ICUBinary$1_FieldInfo_[] = {
	{"val$itemPath", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ICUBinary$1, val$itemPath)},
	{"val$root", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ICUBinary$1, val$root)},
	{}
};

$MethodInfo _ICUBinary$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(ICUBinary$1::*)($Class*,$String*)>(&ICUBinary$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ICUBinary$1_EnclosingMethodInfo_ = {
	"jdk.internal.icu.impl.ICUBinary",
	"getRequiredData",
	"(Ljava/lang/String;)Ljava/nio/ByteBuffer;"
};

$InnerClassInfo _ICUBinary$1_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.ICUBinary$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ICUBinary$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.ICUBinary$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ICUBinary$1_FieldInfo_,
	_ICUBinary$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_ICUBinary$1_EnclosingMethodInfo_,
	_ICUBinary$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.ICUBinary"
};

$Object* allocate$ICUBinary$1($Class* clazz) {
	return $of($alloc(ICUBinary$1));
}

void ICUBinary$1::init$($Class* val$root, $String* val$itemPath) {
	$set(this, val$root, val$root);
	$set(this, val$itemPath, val$itemPath);
}

$Object* ICUBinary$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$root)->getResourceAsStream(this->val$itemPath));
}

ICUBinary$1::ICUBinary$1() {
}

$Class* ICUBinary$1::load$($String* name, bool initialize) {
	$loadClass(ICUBinary$1, name, initialize, &_ICUBinary$1_ClassInfo_, allocate$ICUBinary$1);
	return class$;
}

$Class* ICUBinary$1::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk
#include <jdk/internal/icu/impl/ICUBinary$1.h>
#include <java/io/InputStream.h>
#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void ICUBinary$1::init$($Class* val$root, $String* val$itemPath) {
	$set(this, val$root, val$root);
	$set(this, val$itemPath, val$itemPath);
}

$Object* ICUBinary$1::run() {
	$beforeCallerSensitive();
	return $nc(this->val$root)->getResourceAsStream(this->val$itemPath);
}

ICUBinary$1::ICUBinary$1() {
}

$Class* ICUBinary$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$itemPath", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ICUBinary$1, val$itemPath)},
		{"val$root", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ICUBinary$1, val$root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "()V", 0, $method(ICUBinary$1, init$, void, $Class*, $String*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ICUBinary$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.icu.impl.ICUBinary",
		"getRequiredData",
		"(Ljava/lang/String;)Ljava/nio/ByteBuffer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.ICUBinary$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.ICUBinary$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.ICUBinary"
	};
	$loadClass(ICUBinary$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ICUBinary$1);
	});
	return class$;
}

$Class* ICUBinary$1::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk
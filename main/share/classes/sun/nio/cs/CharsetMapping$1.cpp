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

void CharsetMapping$1::init$($InputStream* val$is) {
	$set(this, val$is, val$is);
}

$Object* CharsetMapping$1::run() {
	return $$new($CharsetMapping)->load(this->val$is);
}

CharsetMapping$1::CharsetMapping$1() {
}

$Class* CharsetMapping$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$is", "Ljava/io/InputStream;", nullptr, $FINAL | $SYNTHETIC, $field(CharsetMapping$1, val$is)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(CharsetMapping$1, init$, void, $InputStream*)},
		{"run", "()Lsun/nio/cs/CharsetMapping;", nullptr, $PUBLIC, $virtualMethod(CharsetMapping$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.cs.CharsetMapping",
		"get",
		"(Ljava/io/InputStream;)Lsun/nio/cs/CharsetMapping;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.CharsetMapping$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.CharsetMapping$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/nio/cs/CharsetMapping;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.CharsetMapping"
	};
	$loadClass(CharsetMapping$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharsetMapping$1);
	});
	return class$;
}

$Class* CharsetMapping$1::class$ = nullptr;

		} // cs
	} // nio
} // sun
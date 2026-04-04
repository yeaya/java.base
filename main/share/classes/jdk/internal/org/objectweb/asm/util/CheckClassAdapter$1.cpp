#include <jdk/internal/org/objectweb/asm/util/CheckClassAdapter$1.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/util/CheckClassAdapter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $CheckClassAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckClassAdapter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

void CheckClassAdapter$1::init$(int32_t api, $ClassVisitor* classVisitor, bool checkDataFlow) {
	$CheckClassAdapter::init$(api, classVisitor, checkDataFlow);
}

CheckClassAdapter$1::CheckClassAdapter$1() {
}

$Class* CheckClassAdapter$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjdk/internal/org/objectweb/asm/ClassVisitor;Z)V", nullptr, 0, $method(CheckClassAdapter$1, init$, void, int32_t, $ClassVisitor*, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.org.objectweb.asm.util.CheckClassAdapter",
		"verify",
		"(Ljdk/internal/org/objectweb/asm/ClassReader;Ljava/lang/ClassLoader;ZLjava/io/PrintWriter;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.util.CheckClassAdapter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.org.objectweb.asm.util.CheckClassAdapter$1",
		"jdk.internal.org.objectweb.asm.util.CheckClassAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.util.CheckClassAdapter"
	};
	$loadClass(CheckClassAdapter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckClassAdapter$1);
	});
	return class$;
}

$Class* CheckClassAdapter$1::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
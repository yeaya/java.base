#include <jdk/internal/org/objectweb/asm/util/CheckClassAdapter$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _CheckClassAdapter$1_MethodInfo_[] = {
	{"<init>", "(ILjdk/internal/org/objectweb/asm/ClassVisitor;Z)V", nullptr, 0, $method(static_cast<void(CheckClassAdapter$1::*)(int32_t,$ClassVisitor*,bool)>(&CheckClassAdapter$1::init$))},
	{}
};

$EnclosingMethodInfo _CheckClassAdapter$1_EnclosingMethodInfo_ = {
	"jdk.internal.org.objectweb.asm.util.CheckClassAdapter",
	"verify",
	"(Ljdk/internal/org/objectweb/asm/ClassReader;Ljava/lang/ClassLoader;ZLjava/io/PrintWriter;)V"
};

$InnerClassInfo _CheckClassAdapter$1_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.util.CheckClassAdapter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckClassAdapter$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.CheckClassAdapter$1",
	"jdk.internal.org.objectweb.asm.util.CheckClassAdapter",
	nullptr,
	nullptr,
	_CheckClassAdapter$1_MethodInfo_,
	nullptr,
	&_CheckClassAdapter$1_EnclosingMethodInfo_,
	_CheckClassAdapter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.util.CheckClassAdapter"
};

$Object* allocate$CheckClassAdapter$1($Class* clazz) {
	return $of($alloc(CheckClassAdapter$1));
}

void CheckClassAdapter$1::init$(int32_t api, $ClassVisitor* classVisitor, bool checkDataFlow) {
	$CheckClassAdapter::init$(api, classVisitor, checkDataFlow);
}

CheckClassAdapter$1::CheckClassAdapter$1() {
}

$Class* CheckClassAdapter$1::load$($String* name, bool initialize) {
	$loadClass(CheckClassAdapter$1, name, initialize, &_CheckClassAdapter$1_ClassInfo_, allocate$CheckClassAdapter$1);
	return class$;
}

$Class* CheckClassAdapter$1::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
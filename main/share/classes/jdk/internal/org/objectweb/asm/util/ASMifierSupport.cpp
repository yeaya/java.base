#include <jdk/internal/org/objectweb/asm/util/ASMifierSupport.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$MethodInfo _ASMifierSupport_MethodInfo_[] = {
	{"asmify", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/util/Map<Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ASMifierSupport_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.util.ASMifierSupport",
	nullptr,
	nullptr,
	nullptr,
	_ASMifierSupport_MethodInfo_
};

$Object* allocate$ASMifierSupport($Class* clazz) {
	return $of($alloc(ASMifierSupport));
}

$Class* ASMifierSupport::load$($String* name, bool initialize) {
	$loadClass(ASMifierSupport, name, initialize, &_ASMifierSupport_ClassInfo_, allocate$ASMifierSupport);
	return class$;
}

$Class* ASMifierSupport::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
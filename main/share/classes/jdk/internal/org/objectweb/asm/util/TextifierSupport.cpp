#include <jdk/internal/org/objectweb/asm/util/TextifierSupport.h>

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

$MethodInfo _TextifierSupport_MethodInfo_[] = {
	{"textify", "(Ljava/lang/StringBuilder;Ljava/util/Map;)V", "(Ljava/lang/StringBuilder;Ljava/util/Map<Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextifierSupport_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.util.TextifierSupport",
	nullptr,
	nullptr,
	nullptr,
	_TextifierSupport_MethodInfo_
};

$Object* allocate$TextifierSupport($Class* clazz) {
	return $of($alloc(TextifierSupport));
}

$Class* TextifierSupport::load$($String* name, bool initialize) {
	$loadClass(TextifierSupport, name, initialize, &_TextifierSupport_ClassInfo_, allocate$TextifierSupport);
	return class$;
}

$Class* TextifierSupport::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
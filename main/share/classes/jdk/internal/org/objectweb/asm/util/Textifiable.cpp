#include <jdk/internal/org/objectweb/asm/util/Textifiable.h>

#include <java/lang/StringBuffer.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Map = ::java::util::Map;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$MethodInfo _Textifiable_MethodInfo_[] = {
	{"textify", "(Ljava/lang/StringBuffer;Ljava/util/Map;)V", "(Ljava/lang/StringBuffer;Ljava/util/Map<Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Textifiable, textify, void, $StringBuffer*, $Map*)},
	{}
};

$ClassInfo _Textifiable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.util.Textifiable",
	nullptr,
	nullptr,
	nullptr,
	_Textifiable_MethodInfo_
};

$Object* allocate$Textifiable($Class* clazz) {
	return $of($alloc(Textifiable));
}

$Class* Textifiable::load$($String* name, bool initialize) {
	$loadClass(Textifiable, name, initialize, &_Textifiable_ClassInfo_, allocate$Textifiable);
	return class$;
}

$Class* Textifiable::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
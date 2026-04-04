#include <java/io/Externalizable.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <jcpp.h>

using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* Externalizable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Externalizable, readExternal, void, $ObjectInput*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Externalizable, writeExternal, void, $ObjectOutput*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.Externalizable",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Externalizable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Externalizable);
	});
	return class$;
}

$Class* Externalizable::class$ = nullptr;

	} // io
} // java
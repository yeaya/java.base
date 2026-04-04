#include <jdk/internal/vm/VMSupport.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/util/Iterator.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;

namespace jdk {
	namespace internal {
		namespace vm {

$Properties* VMSupport::agentProps = nullptr;

void VMSupport::init$() {
}

$Properties* VMSupport::getAgentProperties() {
	$init(VMSupport);
	$synchronized(class$) {
		if (VMSupport::agentProps == nullptr) {
			$assignStatic(VMSupport::agentProps, $new($Properties));
			initAgentProperties(VMSupport::agentProps);
		}
		return VMSupport::agentProps;
	}
}

$Properties* VMSupport::initAgentProperties($Properties* props) {
	$init(VMSupport);
	$prepareNativeStatic(initAgentProperties, $Properties*, $Properties* props);
	$var($Properties, $ret, $invokeNativeStaticObject(props));
	$finishNativeStatic();
	return $ret;
}

$bytes* VMSupport::serializePropertiesToByteArray($Properties* p) {
	$init(VMSupport);
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, out, $new($ByteArrayOutputStream, 4096));
	$var($Properties, props, $new($Properties));
	$var($Set, keyset, $nc(p)->stringPropertyNames());
	{
		$var($Iterator, i$, $nc(keyset)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var($String, value, p->getProperty(key));
				props->put(key, value);
			}
		}
	}
	props->store(out, nullptr);
	return out->toByteArray();
}

$bytes* VMSupport::serializePropertiesToByteArray() {
	$init(VMSupport);
	return serializePropertiesToByteArray($($System::getProperties()));
}

$bytes* VMSupport::serializeAgentPropertiesToByteArray() {
	$init(VMSupport);
	return serializePropertiesToByteArray($(getAgentProperties()));
}

$String* VMSupport::getVMTemporaryDirectory() {
	$init(VMSupport);
	$prepareNativeStatic(getVMTemporaryDirectory, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void VMSupport::clinit$($Class* clazz) {
	$assignStatic(VMSupport::agentProps, nullptr);
}

VMSupport::VMSupport() {
}

$Class* VMSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"agentProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(VMSupport, agentProps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VMSupport, init$, void)},
		{"getAgentProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(VMSupport, getAgentProperties, $Properties*)},
		{"getVMTemporaryDirectory", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(VMSupport, getVMTemporaryDirectory, $String*)},
		{"initAgentProperties", "(Ljava/util/Properties;)Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(VMSupport, initAgentProperties, $Properties*, $Properties*)},
		{"serializeAgentPropertiesToByteArray", "()[B", nullptr, $PUBLIC | $STATIC, $staticMethod(VMSupport, serializeAgentPropertiesToByteArray, $bytes*), "java.io.IOException"},
		{"serializePropertiesToByteArray", "(Ljava/util/Properties;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(VMSupport, serializePropertiesToByteArray, $bytes*, $Properties*), "java.io.IOException"},
		{"serializePropertiesToByteArray", "()[B", nullptr, $PUBLIC | $STATIC, $staticMethod(VMSupport, serializePropertiesToByteArray, $bytes*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.vm.VMSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VMSupport, name, initialize, &classInfo$$, VMSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VMSupport);
	});
	return class$;
}

$Class* VMSupport::class$ = nullptr;

		} // vm
	} // internal
} // jdk
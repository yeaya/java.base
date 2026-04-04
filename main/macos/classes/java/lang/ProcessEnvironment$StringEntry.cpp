#include <java/lang/ProcessEnvironment$StringEntry.h>
#include <java/lang/ProcessEnvironment$Value.h>
#include <java/lang/ProcessEnvironment$Variable.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$Value = ::java::lang::ProcessEnvironment$Value;
using $ProcessEnvironment$Variable = ::java::lang::ProcessEnvironment$Variable;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace lang {

void ProcessEnvironment$StringEntry::init$($Map$Entry* e) {
	$set(this, e, e);
}

$Object* ProcessEnvironment$StringEntry::getKey() {
	return $of($$sure($ProcessEnvironment$Variable, $nc(this->e)->getKey())->toString());
}

$Object* ProcessEnvironment$StringEntry::getValue() {
	return $of($$sure($ProcessEnvironment$Value, $nc(this->e)->getValue())->toString());
}

$String* ProcessEnvironment$StringEntry::setValue($String* newValue) {
	$useLocalObjectStack();
	return $$sure($ProcessEnvironment$Value, $nc(this->e)->setValue($($ProcessEnvironment$Value::valueOf(newValue))))->toString();
}

$String* ProcessEnvironment$StringEntry::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($$cast($String, getKey()));
	var$0->append("="_s);
	var$0->append($$cast($String, getValue()));
	return $str(var$0);
}

bool ProcessEnvironment$StringEntry::equals(Object$* o) {
	return $instanceOf(ProcessEnvironment$StringEntry, o) && $nc(this->e)->equals($cast(ProcessEnvironment$StringEntry, o)->e);
}

int32_t ProcessEnvironment$StringEntry::hashCode() {
	return $nc(this->e)->hashCode();
}

$Object* ProcessEnvironment$StringEntry::setValue(Object$* newValue) {
	return $of(this->setValue($cast($String, newValue)));
}

ProcessEnvironment$StringEntry::ProcessEnvironment$StringEntry() {
}

$Class* ProcessEnvironment$StringEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"e", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$StringEntry, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map$Entry;)V", "(Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;)V", $PUBLIC, $method(ProcessEnvironment$StringEntry, init$, void, $Map$Entry*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntry, setValue, $String*, $String*)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessEnvironment$StringEntry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$StringEntry", "java.lang.ProcessEnvironment", "StringEntry", $PRIVATE | $STATIC},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$StringEntry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessEnvironment"
	};
	$loadClass(ProcessEnvironment$StringEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessEnvironment$StringEntry);
	});
	return class$;
}

$Class* ProcessEnvironment$StringEntry::class$ = nullptr;

	} // lang
} // java
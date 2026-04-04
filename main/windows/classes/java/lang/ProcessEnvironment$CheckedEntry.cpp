#include <java/lang/ProcessEnvironment$CheckedEntry.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace lang {

void ProcessEnvironment$CheckedEntry::init$($Map$Entry* e) {
	$set(this, e, e);
}

$Object* ProcessEnvironment$CheckedEntry::getKey() {
	return $of($cast($String, $nc(this->e)->getKey()));
}

$Object* ProcessEnvironment$CheckedEntry::getValue() {
	return $of($cast($String, $nc(this->e)->getValue()));
}

$String* ProcessEnvironment$CheckedEntry::setValue($String* value) {
	return $cast($String, $nc(this->e)->setValue($($ProcessEnvironment::validateValue(value))));
}

$String* ProcessEnvironment$CheckedEntry::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($$cast($String, getKey()));
	var$0->append("="_s);
	var$0->append($$cast($String, getValue()));
	return $str(var$0);
}

bool ProcessEnvironment$CheckedEntry::equals(Object$* o) {
	return $nc(this->e)->equals(o);
}

int32_t ProcessEnvironment$CheckedEntry::hashCode() {
	return $nc(this->e)->hashCode();
}

$Object* ProcessEnvironment$CheckedEntry::setValue(Object$* value) {
	return $of(this->setValue($cast($String, value)));
}

ProcessEnvironment$CheckedEntry::ProcessEnvironment$CheckedEntry() {
}

$Class* ProcessEnvironment$CheckedEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"e", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$CheckedEntry, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map$Entry;)V", "(Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(ProcessEnvironment$CheckedEntry, init$, void, $Map$Entry*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntry, setValue, $String*, $String*)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessEnvironment$CheckedEntry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$CheckedEntry", "java.lang.ProcessEnvironment", "CheckedEntry", $PRIVATE | $STATIC},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$CheckedEntry",
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
	$loadClass(ProcessEnvironment$CheckedEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessEnvironment$CheckedEntry);
	});
	return class$;
}

$Class* ProcessEnvironment$CheckedEntry::class$ = nullptr;

	} // lang
} // java
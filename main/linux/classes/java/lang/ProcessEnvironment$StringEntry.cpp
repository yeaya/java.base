#include <java/lang/ProcessEnvironment$StringEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessEnvironment$Value.h>
#include <java/lang/ProcessEnvironment$Variable.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $ProcessEnvironment$ExternalData = ::java::lang::ProcessEnvironment$ExternalData;
using $ProcessEnvironment$Value = ::java::lang::ProcessEnvironment$Value;
using $ProcessEnvironment$Variable = ::java::lang::ProcessEnvironment$Variable;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringEntry_FieldInfo_[] = {
	{"e", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$StringEntry, e)},
	{}
};

$MethodInfo _ProcessEnvironment$StringEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map$Entry;)V", "(Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;)V", $PUBLIC, $method(static_cast<void(ProcessEnvironment$StringEntry::*)($Map$Entry*)>(&ProcessEnvironment$StringEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$StringEntry_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringEntry", "java.lang.ProcessEnvironment", "StringEntry", $PRIVATE | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$StringEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_ProcessEnvironment$StringEntry_FieldInfo_,
	_ProcessEnvironment$StringEntry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;",
	nullptr,
	_ProcessEnvironment$StringEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringEntry($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringEntry));
}

void ProcessEnvironment$StringEntry::init$($Map$Entry* e) {
	$set(this, e, e);
}

$Object* ProcessEnvironment$StringEntry::getKey() {
	return $of($nc(($cast($ProcessEnvironment$Variable, $($nc(this->e)->getKey()))))->toString());
}

$Object* ProcessEnvironment$StringEntry::getValue() {
	return $of($nc(($cast($ProcessEnvironment$Value, $($nc(this->e)->getValue()))))->toString());
}

$String* ProcessEnvironment$StringEntry::setValue($String* newValue) {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($ProcessEnvironment$Value, $($nc(this->e)->setValue($($ProcessEnvironment$Value::valueOf(newValue)))))))->toString();
}

$String* ProcessEnvironment$StringEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($cast($String, getKey())), "="_s}));
	return $concat(var$0, $($cast($String, getValue())));
}

bool ProcessEnvironment$StringEntry::equals(Object$* o) {
	return $instanceOf(ProcessEnvironment$StringEntry, o) && $nc(this->e)->equals($nc(($cast(ProcessEnvironment$StringEntry, o)))->e);
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
	$loadClass(ProcessEnvironment$StringEntry, name, initialize, &_ProcessEnvironment$StringEntry_ClassInfo_, allocate$ProcessEnvironment$StringEntry);
	return class$;
}

$Class* ProcessEnvironment$StringEntry::class$ = nullptr;

	} // lang
} // java
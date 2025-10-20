#include <java/lang/ProcessEnvironment$CheckedEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
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
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$CheckedEntry_FieldInfo_[] = {
	{"e", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$CheckedEntry, e)},
	{}
};

$MethodInfo _ProcessEnvironment$CheckedEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map$Entry;)V", "(Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ProcessEnvironment$CheckedEntry::*)($Map$Entry*)>(&ProcessEnvironment$CheckedEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$CheckedEntry_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$CheckedEntry", "java.lang.ProcessEnvironment", "CheckedEntry", $PRIVATE | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$CheckedEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$CheckedEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_ProcessEnvironment$CheckedEntry_FieldInfo_,
	_ProcessEnvironment$CheckedEntry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;",
	nullptr,
	_ProcessEnvironment$CheckedEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$CheckedEntry($Class* clazz) {
	return $of($alloc(ProcessEnvironment$CheckedEntry));
}

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
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($cast($String, getKey())), "="_s}));
	return $concat(var$0, $($cast($String, getValue())));
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
	$loadClass(ProcessEnvironment$CheckedEntry, name, initialize, &_ProcessEnvironment$CheckedEntry_ClassInfo_, allocate$ProcessEnvironment$CheckedEntry);
	return class$;
}

$Class* ProcessEnvironment$CheckedEntry::class$ = nullptr;

	} // lang
} // java
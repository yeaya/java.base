#include <java/lang/ProcessEnvironment$StringEntrySet$2.h>

#include <java/lang/ProcessEnvironment$StringEntrySet.h>
#include <java/lang/ProcessEnvironment$Value.h>
#include <java/lang/ProcessEnvironment$Variable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$Value = ::java::lang::ProcessEnvironment$Value;
using $ProcessEnvironment$Variable = ::java::lang::ProcessEnvironment$Variable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringEntrySet$2_FieldInfo_[] = {
	{"val$o", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$StringEntrySet$2, val$o)},
	{}
};

$MethodInfo _ProcessEnvironment$StringEntrySet$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "()V", 0, $method(ProcessEnvironment$StringEntrySet$2, init$, void, Object$*)},
	{"getKey", "()Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntrySet$2, getKey, $Object*)},
	{"getValue", "()Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntrySet$2, getValue, $Object*)},
	{"setValue", "(Ljava/lang/ProcessEnvironment$Value;)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringEntrySet$2, setValue, $ProcessEnvironment$Value*, $ProcessEnvironment$Value*)},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessEnvironment$StringEntrySet$2, setValue, $Object*, Object$*)},
	{}
};

$EnclosingMethodInfo _ProcessEnvironment$StringEntrySet$2_EnclosingMethodInfo_ = {
	"java.lang.ProcessEnvironment$StringEntrySet",
	"vvEntry",
	"(Ljava/lang/Object;)Ljava/util/Map$Entry;"
};

$InnerClassInfo _ProcessEnvironment$StringEntrySet$2_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringEntrySet", "java.lang.ProcessEnvironment", "StringEntrySet", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$StringEntrySet$2", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.ProcessEnvironment$Variable", "java.lang.ProcessEnvironment", "Variable", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$Value", "java.lang.ProcessEnvironment", "Value", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessEnvironment$StringEntrySet$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringEntrySet$2",
	"java.lang.Object",
	"java.util.Map$Entry",
	_ProcessEnvironment$StringEntrySet$2_FieldInfo_,
	_ProcessEnvironment$StringEntrySet$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;",
	&_ProcessEnvironment$StringEntrySet$2_EnclosingMethodInfo_,
	_ProcessEnvironment$StringEntrySet$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringEntrySet$2($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringEntrySet$2));
}

void ProcessEnvironment$StringEntrySet$2::init$(Object$* val$o) {
	$set(this, val$o, val$o);
}

$Object* ProcessEnvironment$StringEntrySet$2::getKey() {
	return $of($ProcessEnvironment$Variable::valueOfQueryOnly($($nc(($cast($Map$Entry, this->val$o)))->getKey())));
}

$Object* ProcessEnvironment$StringEntrySet$2::getValue() {
	return $of($ProcessEnvironment$Value::valueOfQueryOnly($($nc(($cast($Map$Entry, this->val$o)))->getValue())));
}

$ProcessEnvironment$Value* ProcessEnvironment$StringEntrySet$2::setValue($ProcessEnvironment$Value* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* ProcessEnvironment$StringEntrySet$2::setValue(Object$* value) {
	return $of(this->setValue($cast($ProcessEnvironment$Value, value)));
}

ProcessEnvironment$StringEntrySet$2::ProcessEnvironment$StringEntrySet$2() {
}

$Class* ProcessEnvironment$StringEntrySet$2::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$StringEntrySet$2, name, initialize, &_ProcessEnvironment$StringEntrySet$2_ClassInfo_, allocate$ProcessEnvironment$StringEntrySet$2);
	return class$;
}

$Class* ProcessEnvironment$StringEntrySet$2::class$ = nullptr;

	} // lang
} // java
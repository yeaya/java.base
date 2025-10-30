#include <java/lang/Record.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _Record_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Record::*)()>(&Record::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Record_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.Record",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Record_MethodInfo_
};

$Object* allocate$Record($Class* clazz) {
	return $of($alloc(Record));
}

bool Record::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t Record::hashCode() {
	 return this->$Object::hashCode();
}

$String* Record::toString() {
	 return this->$Object::toString();
}

void Record::init$() {
}

Record::Record() {
}

$Class* Record::load$($String* name, bool initialize) {
	$loadClass(Record, name, initialize, &_Record_ClassInfo_, allocate$Record);
	return class$;
}

$Class* Record::class$ = nullptr;

	} // lang
} // java
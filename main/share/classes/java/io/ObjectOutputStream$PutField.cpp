#include <java/io/ObjectOutputStream$PutField.h>

#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream.h>
#include <jcpp.h>

using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$CompoundAttribute _ObjectOutputStream$PutField_MethodAnnotations_write10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _ObjectOutputStream$PutField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectOutputStream$PutField, init$, void)},
	{"put", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, bool)},
	{"put", "(Ljava/lang/String;B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, int8_t)},
	{"put", "(Ljava/lang/String;C)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, char16_t)},
	{"put", "(Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, int16_t)},
	{"put", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, int32_t)},
	{"put", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, int64_t)},
	{"put", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, float)},
	{"put", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, double)},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutputStream$PutField, put, void, $String*, Object$*)},
	{"write", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ObjectOutputStream$PutField, write, void, $ObjectOutput*), "java.io.IOException", nullptr, _ObjectOutputStream$PutField_MethodAnnotations_write10},
	{}
};

$InnerClassInfo _ObjectOutputStream$PutField_InnerClassesInfo_[] = {
	{"java.io.ObjectOutputStream$PutField", "java.io.ObjectOutputStream", "PutField", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjectOutputStream$PutField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.ObjectOutputStream$PutField",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ObjectOutputStream$PutField_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectOutputStream$PutField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectOutputStream"
};

$Object* allocate$ObjectOutputStream$PutField($Class* clazz) {
	return $of($alloc(ObjectOutputStream$PutField));
}

void ObjectOutputStream$PutField::init$() {
}

ObjectOutputStream$PutField::ObjectOutputStream$PutField() {
}

$Class* ObjectOutputStream$PutField::load$($String* name, bool initialize) {
	$loadClass(ObjectOutputStream$PutField, name, initialize, &_ObjectOutputStream$PutField_ClassInfo_, allocate$ObjectOutputStream$PutField);
	return class$;
}

$Class* ObjectOutputStream$PutField::class$ = nullptr;

	} // io
} // java
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

void ObjectOutputStream$PutField::init$() {
}

ObjectOutputStream$PutField::ObjectOutputStream$PutField() {
}

$Class* ObjectOutputStream$PutField::load$($String* name, bool initialize) {
	$CompoundAttribute writemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
		{"write", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ObjectOutputStream$PutField, write, void, $ObjectOutput*), "java.io.IOException", nullptr, writemethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectOutputStream$PutField", "java.io.ObjectOutputStream", "PutField", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.io.ObjectOutputStream$PutField",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectOutputStream"
	};
	$loadClass(ObjectOutputStream$PutField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectOutputStream$PutField);
	});
	return class$;
}

$Class* ObjectOutputStream$PutField::class$ = nullptr;

	} // io
} // java
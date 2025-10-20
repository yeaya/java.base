#include <java/io/WriteAbortedException.h>

#include <java/io/ObjectStreamException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace io {

$NamedAttribute WriteAbortedException_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _WriteAbortedException_FieldAnnotations_detail[] = {
	{"Ljava/lang/Deprecated;", WriteAbortedException_Attribute_var$0},
	{}
};

$FieldInfo _WriteAbortedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WriteAbortedException, serialVersionUID)},
	{"detail", "Ljava/lang/Exception;", nullptr, $PUBLIC | $DEPRECATED, $field(WriteAbortedException, detail), _WriteAbortedException_FieldAnnotations_detail},
	{}
};

$MethodInfo _WriteAbortedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(WriteAbortedException::*)($String*,$Exception*)>(&WriteAbortedException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WriteAbortedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.WriteAbortedException",
	"java.io.ObjectStreamException",
	nullptr,
	_WriteAbortedException_FieldInfo_,
	_WriteAbortedException_MethodInfo_
};

$Object* allocate$WriteAbortedException($Class* clazz) {
	return $of($alloc(WriteAbortedException));
}

void WriteAbortedException::init$($String* s, $Exception* ex) {
	$ObjectStreamException::init$(s);
	initCause(nullptr);
	$set(this, detail, ex);
}

$String* WriteAbortedException::getMessage() {
	$useLocalCurrentObjectStackCache();
	if (this->detail == nullptr) {
		return $ObjectStreamException::getMessage();
	} else {
		$var($String, var$0, $$str({$($ObjectStreamException::getMessage()), "; "_s}));
		return $concat(var$0, $($nc(this->detail)->toString()));
	}
}

$Throwable* WriteAbortedException::getCause() {
	return this->detail;
}

WriteAbortedException::WriteAbortedException() {
}

WriteAbortedException::WriteAbortedException(const WriteAbortedException& e) {
}

WriteAbortedException WriteAbortedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void WriteAbortedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* WriteAbortedException::load$($String* name, bool initialize) {
	$loadClass(WriteAbortedException, name, initialize, &_WriteAbortedException_ClassInfo_, allocate$WriteAbortedException);
	return class$;
}

$Class* WriteAbortedException::class$ = nullptr;

	} // io
} // java
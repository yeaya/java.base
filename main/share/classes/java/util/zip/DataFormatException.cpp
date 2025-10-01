#include <java/util/zip/DataFormatException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _DataFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataFormatException, serialVersionUID)},
	{}
};

$MethodInfo _DataFormatException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DataFormatException::*)()>(&DataFormatException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DataFormatException::*)($String*)>(&DataFormatException::init$))},
	{}
};

$ClassInfo _DataFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.DataFormatException",
	"java.lang.Exception",
	nullptr,
	_DataFormatException_FieldInfo_,
	_DataFormatException_MethodInfo_
};

$Object* allocate$DataFormatException($Class* clazz) {
	return $of($alloc(DataFormatException));
}

void DataFormatException::init$() {
	$Exception::init$();
}

void DataFormatException::init$($String* s) {
	$Exception::init$(s);
}

DataFormatException::DataFormatException() {
}

DataFormatException::DataFormatException(const DataFormatException& e) {
}

DataFormatException DataFormatException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DataFormatException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DataFormatException::load$($String* name, bool initialize) {
	$loadClass(DataFormatException, name, initialize, &_DataFormatException_ClassInfo_, allocate$DataFormatException);
	return class$;
}

$Class* DataFormatException::class$ = nullptr;

		} // zip
	} // util
} // java
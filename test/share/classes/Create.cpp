#include <Create.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _Create_FieldInfo_[] = {
	{"length", "I", nullptr, $STATIC | $FINAL, $constField(Create, length)},
	{}
};

$MethodInfo _Create_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Create, init$, void)},
	{"createFileName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Create, createFileName, $String*, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Create, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Create_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Create",
	"java.lang.Object",
	nullptr,
	_Create_FieldInfo_,
	_Create_MethodInfo_
};

$Object* allocate$Create($Class* clazz) {
	return $of($alloc(Create));
}

void Create::init$() {
}

void Create::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fileName, createFileName(Create::length));
	$var($File, file, $new($File, fileName));
	try {
		bool result = file->createNewFile();
		if (result) {
			if (!file->exists()) {
				$throwNew($RuntimeException, "Result is incorrect"_s);
			}
		} else if (file->exists()) {
			$throwNew($RuntimeException, "Result is incorrect"_s);
		}
	} catch ($IOException& ioe) {
	}
}

$String* Create::createFileName(int32_t length) {
	$var($chars, array, $new($chars, length));
	for (int32_t i = 0; i < length; ++i) {
		array->set(i, (char16_t)(u'0' + (i % 10)));
	}
	return $new($String, array);
}

Create::Create() {
}

$Class* Create::load$($String* name, bool initialize) {
	$loadClass(Create, name, initialize, &_Create_ClassInfo_, allocate$Create);
	return class$;
}

$Class* Create::class$ = nullptr;
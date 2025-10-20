#include <ExceedMaxDim.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef IMPLICIT_LOADER
#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;

$FieldInfo _ExceedMaxDim_FieldInfo_[] = {
	{"brackets", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExceedMaxDim, brackets)},
	{"name254", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExceedMaxDim, name254)},
	{"name255", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExceedMaxDim, name255)},
	{"name256", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExceedMaxDim, name256)},
	{"name1", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExceedMaxDim, name1)},
	{"bigName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExceedMaxDim, bigName)},
	{"error", "I", nullptr, $PRIVATE, $field(ExceedMaxDim, error)},
	{"IMPLICIT_LOADER", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExceedMaxDim, IMPLICIT_LOADER)},
	{}
};

$MethodInfo _ExceedMaxDim_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExceedMaxDim::*)()>(&ExceedMaxDim::init$))},
	{"assertFailForName", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(static_cast<void(ExceedMaxDim::*)($String*,$ClassLoader*)>(&ExceedMaxDim::assertFailForName))},
	{"assertSucceedForName", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(static_cast<void(ExceedMaxDim::*)($String*,$ClassLoader*)>(&ExceedMaxDim::assertSucceedForName))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExceedMaxDim::main)), "java.lang.Exception"},
	{"testImplicitLoader", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExceedMaxDim::*)()>(&ExceedMaxDim::testImplicitLoader)), "java.lang.Exception"},
	{"testOtherLoader", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExceedMaxDim::*)()>(&ExceedMaxDim::testOtherLoader)), "java.lang.Exception"},
	{}
};

$ClassInfo _ExceedMaxDim_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExceedMaxDim",
	"java.lang.Object",
	nullptr,
	_ExceedMaxDim_FieldInfo_,
	_ExceedMaxDim_MethodInfo_
};

$Object* allocate$ExceedMaxDim($Class* clazz) {
	return $of($alloc(ExceedMaxDim));
}

$ClassLoader* ExceedMaxDim::IMPLICIT_LOADER = nullptr;

void ExceedMaxDim::init$() {
	$set(this, brackets, "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[["_s);
	$set(this, name254, $str({this->brackets, "Ljava.lang.String;"_s}));
	$set(this, name255, $str({"["_s, this->name254}));
	$set(this, name256, $str({"["_s, this->name255}));
	$set(this, name1, "[Ljava.lang.String;"_s);
	this->error = 0;
	$var($StringBuilder, sb, $new($StringBuilder, $Short::MAX_VALUE + 50));
	for (int32_t i = 0; i < $Short::MAX_VALUE + 20; ++i) {
		sb->append(u'[');
	}
	sb->append("Ljava.lang.String;"_s);
	$set(this, bigName, sb->toString());
	if ($nc(this->name256)->lastIndexOf((int32_t)u'[') != 255) {
		$throwNew($RuntimeException, "Test broken"_s);
	}
}

void ExceedMaxDim::main($StringArray* args) {
	$init(ExceedMaxDim);
	$var(ExceedMaxDim, test, $new(ExceedMaxDim));
	test->testImplicitLoader();
	test->testOtherLoader();
	if (test->error != 0) {
		$throwNew($RuntimeException, "Test failed, was able to create array with dim > 255. See log for details."_s);
	}
}

void ExceedMaxDim::testImplicitLoader() {
	$useLocalCurrentObjectStackCache();
	assertSucceedForName(this->name1, ExceedMaxDim::IMPLICIT_LOADER);
	assertSucceedForName(this->name254, ExceedMaxDim::IMPLICIT_LOADER);
	assertSucceedForName(this->name255, ExceedMaxDim::IMPLICIT_LOADER);
	assertSucceedForName($$str({this->brackets, "[LClass1;"_s}), ExceedMaxDim::IMPLICIT_LOADER);
	assertFailForName(this->name256, ExceedMaxDim::IMPLICIT_LOADER);
	assertFailForName(this->bigName, ExceedMaxDim::IMPLICIT_LOADER);
	assertFailForName($$str({this->brackets, "[[LClass2;"_s}), ExceedMaxDim::IMPLICIT_LOADER);
}

void ExceedMaxDim::testOtherLoader() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, ExceedMaxDim::class$->getClassLoader());
	assertSucceedForName(this->name1, cl);
	assertSucceedForName(this->name254, cl);
	assertSucceedForName(this->name255, cl);
	assertSucceedForName($$str({this->brackets, "[LClass3;"_s}), cl);
	assertFailForName(this->name256, cl);
	assertFailForName(this->bigName, cl);
	assertFailForName($$str({this->brackets, "[[Class4;"_s}), cl);
}

void ExceedMaxDim::assertFailForName($String* name, $ClassLoader* cl) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = nullptr;
	try {
		if (cl == nullptr) {
			c = $Class::forName(name);
		} else {
			c = $Class::forName(name, true, cl);
		}
		++this->error;
		$init($System);
		$nc($System::err)->println($$str({"ERROR: could create "_s, c}));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
	}
}

void ExceedMaxDim::assertSucceedForName($String* name, $ClassLoader* cl) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = nullptr;
	try {
		if (cl == nullptr) {
			c = $Class::forName(name);
		} else {
			c = $Class::forName(name, true, cl);
		}
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		++this->error;
		$init($System);
		$nc($System::err)->println($$str({"ERROR: could not create "_s, name}));
	}
}

void clinit$ExceedMaxDim($Class* class$) {
	$assignStatic(ExceedMaxDim::IMPLICIT_LOADER, nullptr);
}

ExceedMaxDim::ExceedMaxDim() {
}

$Class* ExceedMaxDim::load$($String* name, bool initialize) {
	$loadClass(ExceedMaxDim, name, initialize, &_ExceedMaxDim_ClassInfo_, clinit$ExceedMaxDim, allocate$ExceedMaxDim);
	return class$;
}

$Class* ExceedMaxDim::class$ = nullptr;
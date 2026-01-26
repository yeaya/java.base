#include <DefineClassByteBuffer.h>

#include <DefineClassByteBuffer$DummyClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

#undef MAX_TYPE

using $DefineClassByteBuffer$DummyClassLoader = ::DefineClassByteBuffer$DummyClassLoader;
using $DefineClassByteBuffer$DummyClassLoaderArray = $Array<DefineClassByteBuffer$DummyClassLoader>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _DefineClassByteBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefineClassByteBuffer, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefineClassByteBuffer, main, void, $StringArray*), "java.lang.Exception"},
	{"test", "(Ljava/lang/ClassLoader;)V", nullptr, $STATIC, $staticMethod(DefineClassByteBuffer, test, void, $ClassLoader*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _DefineClassByteBuffer_InnerClassesInfo_[] = {
	{"DefineClassByteBuffer$DummyClassLoader", "DefineClassByteBuffer", "DummyClassLoader", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefineClassByteBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefineClassByteBuffer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefineClassByteBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_DefineClassByteBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DefineClassByteBuffer$DummyClassLoader"
};

$Object* allocate$DefineClassByteBuffer($Class* clazz) {
	return $of($alloc(DefineClassByteBuffer));
}

void DefineClassByteBuffer::init$() {
}

void DefineClassByteBuffer::test($ClassLoader* cl) {
	$load(DefineClassByteBuffer);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = $Class::forName("TestClass"_s, true, cl);
	if (!"TestClass"_s->equals($($nc(c)->getName()))) {
		$throwNew($RuntimeException, $$str({"Got wrong class: "_s, c}));
	}
	if ($nc(c)->getClassLoader() != cl) {
		$throwNew($RuntimeException, $$str({"TestClass defined by wrong classloader: "_s, $(c->getClassLoader())}));
	}
}

void DefineClassByteBuffer::main($StringArray* arg) {
	$useLocalCurrentObjectStackCache();
	$var($DefineClassByteBuffer$DummyClassLoaderArray, cls, $new($DefineClassByteBuffer$DummyClassLoaderArray, $DefineClassByteBuffer$DummyClassLoader::MAX_TYPE));
	for (int32_t i = 0; i < cls->length; ++i) {
		cls->set(i, $$new($DefineClassByteBuffer$DummyClassLoader, i));
	}
	for (int32_t i = 0; i < cls->length; ++i) {
		test(cls->get(i));
	}
}

DefineClassByteBuffer::DefineClassByteBuffer() {
}

$Class* DefineClassByteBuffer::load$($String* name, bool initialize) {
	$loadClass(DefineClassByteBuffer, name, initialize, &_DefineClassByteBuffer_ClassInfo_, allocate$DefineClassByteBuffer);
	return class$;
}

$Class* DefineClassByteBuffer::class$ = nullptr;
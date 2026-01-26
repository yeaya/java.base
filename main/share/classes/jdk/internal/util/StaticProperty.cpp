#include <jdk/internal/util/StaticProperty.h>

#include <java/lang/InternalError.h>
#include <java/util/Properties.h>
#include <jcpp.h>

#undef JAVA_HOME
#undef JAVA_IO_TMPDIR
#undef JAVA_LIBRARY_PATH
#undef JDK_SERIAL_FILTER
#undef JDK_SERIAL_FILTER_FACTORY
#undef NATIVE_ENCODING
#undef SUN_BOOT_LIBRARY_PATH
#undef USER_DIR
#undef USER_HOME
#undef USER_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;

namespace jdk {
	namespace internal {
		namespace util {

$FieldInfo _StaticProperty_FieldInfo_[] = {
	{"JAVA_HOME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, JAVA_HOME)},
	{"USER_HOME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, USER_HOME)},
	{"USER_DIR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, USER_DIR)},
	{"USER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, USER_NAME)},
	{"JAVA_LIBRARY_PATH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, JAVA_LIBRARY_PATH)},
	{"SUN_BOOT_LIBRARY_PATH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, SUN_BOOT_LIBRARY_PATH)},
	{"JDK_SERIAL_FILTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, JDK_SERIAL_FILTER)},
	{"JDK_SERIAL_FILTER_FACTORY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, JDK_SERIAL_FILTER_FACTORY)},
	{"JAVA_IO_TMPDIR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, JAVA_IO_TMPDIR)},
	{"NATIVE_ENCODING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StaticProperty, NATIVE_ENCODING)},
	{}
};

$MethodInfo _StaticProperty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(StaticProperty, init$, void)},
	{"getProperty", "(Ljava/util/Properties;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(StaticProperty, getProperty, $String*, $Properties*, $String*)},
	{"getProperty", "(Ljava/util/Properties;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(StaticProperty, getProperty, $String*, $Properties*, $String*, $String*)},
	{"javaHome", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, javaHome, $String*)},
	{"javaIoTmpDir", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, javaIoTmpDir, $String*)},
	{"javaLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, javaLibraryPath, $String*)},
	{"jdkSerialFilter", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, jdkSerialFilter, $String*)},
	{"jdkSerialFilterFactory", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, jdkSerialFilterFactory, $String*)},
	{"nativeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, nativeEncoding, $String*)},
	{"sunBootLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, sunBootLibraryPath, $String*)},
	{"userDir", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, userDir, $String*)},
	{"userHome", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, userHome, $String*)},
	{"userName", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StaticProperty, userName, $String*)},
	{}
};

$ClassInfo _StaticProperty_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.util.StaticProperty",
	"java.lang.Object",
	nullptr,
	_StaticProperty_FieldInfo_,
	_StaticProperty_MethodInfo_
};

$Object* allocate$StaticProperty($Class* clazz) {
	return $of($alloc(StaticProperty));
}

$String* StaticProperty::JAVA_HOME = nullptr;
$String* StaticProperty::USER_HOME = nullptr;
$String* StaticProperty::USER_DIR = nullptr;
$String* StaticProperty::USER_NAME = nullptr;
$String* StaticProperty::JAVA_LIBRARY_PATH = nullptr;
$String* StaticProperty::SUN_BOOT_LIBRARY_PATH = nullptr;
$String* StaticProperty::JDK_SERIAL_FILTER = nullptr;
$String* StaticProperty::JDK_SERIAL_FILTER_FACTORY = nullptr;
$String* StaticProperty::JAVA_IO_TMPDIR = nullptr;
$String* StaticProperty::NATIVE_ENCODING = nullptr;

void StaticProperty::init$() {
}

$String* StaticProperty::getProperty($Properties* props, $String* key) {
	$init(StaticProperty);
	$useLocalCurrentObjectStackCache();
	$var($String, v, $nc(props)->getProperty(key));
	if (v == nullptr) {
		$throwNew($InternalError, $$str({"null property: "_s, key}));
	}
	return v;
}

$String* StaticProperty::getProperty($Properties* props, $String* key, $String* defaultVal) {
	$init(StaticProperty);
	$var($String, v, $nc(props)->getProperty(key));
	return (v == nullptr) ? defaultVal : v;
}

$String* StaticProperty::javaHome() {
	$init(StaticProperty);
	return StaticProperty::JAVA_HOME;
}

$String* StaticProperty::userHome() {
	$init(StaticProperty);
	return StaticProperty::USER_HOME;
}

$String* StaticProperty::userDir() {
	$init(StaticProperty);
	return StaticProperty::USER_DIR;
}

$String* StaticProperty::userName() {
	$init(StaticProperty);
	return StaticProperty::USER_NAME;
}

$String* StaticProperty::javaLibraryPath() {
	$init(StaticProperty);
	return StaticProperty::JAVA_LIBRARY_PATH;
}

$String* StaticProperty::javaIoTmpDir() {
	$init(StaticProperty);
	return StaticProperty::JAVA_IO_TMPDIR;
}

$String* StaticProperty::sunBootLibraryPath() {
	$init(StaticProperty);
	return StaticProperty::SUN_BOOT_LIBRARY_PATH;
}

$String* StaticProperty::jdkSerialFilter() {
	$init(StaticProperty);
	return StaticProperty::JDK_SERIAL_FILTER;
}

$String* StaticProperty::jdkSerialFilterFactory() {
	$init(StaticProperty);
	return StaticProperty::JDK_SERIAL_FILTER_FACTORY;
}

$String* StaticProperty::nativeEncoding() {
	$init(StaticProperty);
	return StaticProperty::NATIVE_ENCODING;
}

void clinit$StaticProperty($Class* class$) {
	{
		$var($Properties, props, $System::getProperties());
		$assignStatic(StaticProperty::JAVA_HOME, StaticProperty::getProperty(props, "java.home"_s));
		$assignStatic(StaticProperty::USER_HOME, StaticProperty::getProperty(props, "user.home"_s));
		$assignStatic(StaticProperty::USER_DIR, StaticProperty::getProperty(props, "user.dir"_s));
		$assignStatic(StaticProperty::USER_NAME, StaticProperty::getProperty(props, "user.name"_s));
		$assignStatic(StaticProperty::JAVA_IO_TMPDIR, StaticProperty::getProperty(props, "java.io.tmpdir"_s));
		$assignStatic(StaticProperty::JAVA_LIBRARY_PATH, StaticProperty::getProperty(props, "java.library.path"_s, ""_s));
		$assignStatic(StaticProperty::SUN_BOOT_LIBRARY_PATH, StaticProperty::getProperty(props, "sun.boot.library.path"_s, ""_s));
		$assignStatic(StaticProperty::JDK_SERIAL_FILTER, StaticProperty::getProperty(props, "jdk.serialFilter"_s, nullptr));
		$assignStatic(StaticProperty::JDK_SERIAL_FILTER_FACTORY, StaticProperty::getProperty(props, "jdk.serialFilterFactory"_s, nullptr));
		$assignStatic(StaticProperty::NATIVE_ENCODING, StaticProperty::getProperty(props, "native.encoding"_s));
	}
}

StaticProperty::StaticProperty() {
}

$Class* StaticProperty::load$($String* name, bool initialize) {
	$loadClass(StaticProperty, name, initialize, &_StaticProperty_ClassInfo_, clinit$StaticProperty, allocate$StaticProperty);
	return class$;
}

$Class* StaticProperty::class$ = nullptr;

		} // util
	} // internal
} // jdk
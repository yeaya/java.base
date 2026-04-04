#include <java/util/spi/AbstractResourceBundleProvider.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Module.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/PropertyResourceBundle.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ResourceBundle.h>
#include <jdk/internal/access/JavaUtilResourceBundleAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/util/SecurityConstants.h>
#include <sun/util/resources/Bundles.h>
#include <jcpp.h>

#undef FORMAT_CLASS
#undef FORMAT_DEFAULT
#undef FORMAT_PROPERTIES
#undef GET_CLASSLOADER_PERMISSION
#undef RB_ACCESS

using $PermissionArray = $Array<::java::security::Permission>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Locale = ::java::util::Locale;
using $PropertyResourceBundle = ::java::util::PropertyResourceBundle;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $JavaUtilResourceBundleAccess = ::jdk::internal::access::JavaUtilResourceBundleAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $SecurityConstants = ::sun::security::util::SecurityConstants;
using $Bundles = ::sun::util::resources::Bundles;

namespace java {
	namespace util {
		namespace spi {

class AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0 : public $PrivilegedAction {
	$class(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Module* module, $String* bundleName) {
		$set(this, module, module);
		$set(this, bundleName, bundleName);
	}
	virtual $Object* run() override {
		 return $of(AbstractResourceBundleProvider::lambda$loadResourceBundle$0(module, bundleName));
	}
	$Module* module = nullptr;
	$String* bundleName = nullptr;
};
$Class* AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"module", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0, module)},
		{"bundleName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0, bundleName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0, init$, void, $Module*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.spi.AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0);
	});
	return class$;
}
$Class* AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0::class$ = nullptr;

class AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1 : public $PrivilegedAction {
	$class(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Module* module, $String* resourceName) {
		$set(this, module, module);
		$set(this, resourceName, resourceName);
	}
	virtual $Object* run() override {
		 return AbstractResourceBundleProvider::lambda$loadPropertyResourceBundle$1(module, resourceName);
	}
	$Module* module = nullptr;
	$String* resourceName = nullptr;
};
$Class* AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"module", "Ljava/lang/Module;", nullptr, $PUBLIC, $field(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1, module)},
		{"resourceName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1, resourceName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1, init$, void, $Module*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.spi.AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1);
	});
	return class$;
}
$Class* AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1::class$ = nullptr;

$JavaUtilResourceBundleAccess* AbstractResourceBundleProvider::RB_ACCESS = nullptr;
$String* AbstractResourceBundleProvider::FORMAT_CLASS = nullptr;
$String* AbstractResourceBundleProvider::FORMAT_PROPERTIES = nullptr;

void AbstractResourceBundleProvider::init$() {
	AbstractResourceBundleProvider::init$($$new($StringArray, {AbstractResourceBundleProvider::FORMAT_PROPERTIES}));
}

void AbstractResourceBundleProvider::init$($StringArray* formats) {
	$useLocalObjectStack();
	$set(this, formats, $cast($StringArray, $nc(formats)->clone()));
	if (this->formats->length == 0) {
		$throwNew($IllegalArgumentException, "empty formats"_s);
	}
	{
		$var($StringArray, arr$, this->formats);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, f, arr$->get(i$));
			{
				bool var$0 = !AbstractResourceBundleProvider::FORMAT_CLASS->equals(f);
				if (var$0 && !AbstractResourceBundleProvider::FORMAT_PROPERTIES->equals(f)) {
					$throwNew($IllegalArgumentException, f);
				}
			}
		}
	}
}

$String* AbstractResourceBundleProvider::toBundleName($String* baseName, $Locale* locale) {
	$init($ResourceBundle$Control);
	return $$nc($ResourceBundle$Control::getControl($ResourceBundle$Control::FORMAT_DEFAULT))->toBundleName(baseName, locale);
}

$ResourceBundle* AbstractResourceBundleProvider::getBundle($String* baseName, $Locale* locale) {
	$useLocalObjectStack();
	$var($Module, module, this->getClass()->getModule());
	$var($String, bundleName, toBundleName(baseName, locale));
	$var($ResourceBundle, bundle, getBundle0(module, bundleName));
	if (bundle == nullptr) {
		$var($String, otherBundleName, $Bundles::toOtherBundleName(baseName, bundleName, locale));
		if (!$nc(bundleName)->equals(otherBundleName)) {
			$assign(bundle, getBundle0(module, $($Bundles::toOtherBundleName(baseName, bundleName, locale))));
		}
	}
	return bundle;
}

$ResourceBundle* AbstractResourceBundleProvider::getBundle0($Module* module, $String* bundleName) {
	$useLocalObjectStack();
	$var($ResourceBundle, bundle, nullptr);
	{
		$var($StringArray, arr$, this->formats);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, format, arr$->get(i$));
			try {
				if (AbstractResourceBundleProvider::FORMAT_CLASS->equals(format)) {
					$assign(bundle, loadResourceBundle(module, bundleName));
				} else if (AbstractResourceBundleProvider::FORMAT_PROPERTIES->equals(format)) {
					$assign(bundle, loadPropertyResourceBundle(module, bundleName));
				}
				if (bundle != nullptr) {
					break;
				}
			} catch ($IOException& e) {
				$throwNew($UncheckedIOException, e);
			}
		}
	}
	return bundle;
}

$ResourceBundle* AbstractResourceBundleProvider::loadResourceBundle($Module* module, $String* bundleName) {
	$init(AbstractResourceBundleProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new(AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0, module, bundleName));
	$init($SecurityConstants);
	$Class* c = $cast($Class, $AccessController::doPrivileged(pa, nullptr, $$new($PermissionArray, {$SecurityConstants::GET_CLASSLOADER_PERMISSION})));
	$load($ResourceBundle);
	if (c != nullptr && $ResourceBundle::class$->isAssignableFrom(c)) {
		$Class* bundleClass = c;
		return $nc(AbstractResourceBundleProvider::RB_ACCESS)->newResourceBundle(bundleClass);
	}
	return nullptr;
}

$ResourceBundle* AbstractResourceBundleProvider::loadPropertyResourceBundle($Module* module, $String* bundleName) {
	$init(AbstractResourceBundleProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, resourceName, toResourceName(bundleName, "properties"_s));
	if (resourceName == nullptr) {
		return nullptr;
	}
	$var($PrivilegedAction, pa, $new(AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1, module, resourceName));
	try {
		$var($InputStream, stream, $cast($InputStream, $AccessController::doPrivileged(pa)));
		$var($Throwable, var$0, nullptr);
		$var($ResourceBundle, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				if (stream != nullptr) {
					$assign(var$2, $new($PropertyResourceBundle, stream));
					return$1 = true;
					goto $finally;
				} else {
					$assign(var$2, nullptr);
					return$1 = true;
					goto $finally;
				}
			} catch ($Throwable& t$) {
				if (stream != nullptr) {
					try {
						stream->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (stream != nullptr) {
				stream->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($UncheckedIOException& e) {
		$throw($$cast($IOException, e->getCause()));
	}
	$shouldNotReachHere();
}

$String* AbstractResourceBundleProvider::toResourceName($String* bundleName, $String* suffix) {
	$init(AbstractResourceBundleProvider);
	$useLocalObjectStack();
	if ($nc(bundleName)->contains("://"_s)) {
		return nullptr;
	}
	int32_t var$0 = bundleName->length() + 1;
	$var($StringBuilder, sb, $new($StringBuilder, var$0 + $nc(suffix)->length()));
	sb->append($(bundleName->replace(u'.', u'/')))->append(u'.')->append(suffix);
	return sb->toString();
}

$InputStream* AbstractResourceBundleProvider::lambda$loadPropertyResourceBundle$1($Module* module, $String* resourceName) {
	$init(AbstractResourceBundleProvider);
	$beforeCallerSensitive();
	try {
		return $nc(module)->getResourceAsStream(resourceName);
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

$Class* AbstractResourceBundleProvider::lambda$loadResourceBundle$0($Module* module, $String* bundleName) {
	$init(AbstractResourceBundleProvider);
	$beforeCallerSensitive();
	return $Class::forName(module, bundleName);
}

void AbstractResourceBundleProvider::clinit$($Class* clazz) {
	$assignStatic(AbstractResourceBundleProvider::FORMAT_CLASS, "java.class"_s);
	$assignStatic(AbstractResourceBundleProvider::FORMAT_PROPERTIES, "java.properties"_s);
	$assignStatic(AbstractResourceBundleProvider::RB_ACCESS, $SharedSecrets::getJavaUtilResourceBundleAccess());
}

AbstractResourceBundleProvider::AbstractResourceBundleProvider() {
}

$Class* AbstractResourceBundleProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.spi.AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0")) {
			return AbstractResourceBundleProvider$$Lambda$lambda$loadResourceBundle$0::load$(name, initialize);
		}
		if (name->equals("java.util.spi.AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1")) {
			return AbstractResourceBundleProvider$$Lambda$lambda$loadPropertyResourceBundle$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"RB_ACCESS", "Ljdk/internal/access/JavaUtilResourceBundleAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractResourceBundleProvider, RB_ACCESS)},
		{"FORMAT_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractResourceBundleProvider, FORMAT_CLASS)},
		{"FORMAT_PROPERTIES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractResourceBundleProvider, FORMAT_PROPERTIES)},
		{"formats", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AbstractResourceBundleProvider, formats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractResourceBundleProvider, init$, void)},
		{"<init>", "([Ljava/lang/String;)V", nullptr, $PROTECTED | $TRANSIENT, $method(AbstractResourceBundleProvider, init$, void, $StringArray*)},
		{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(AbstractResourceBundleProvider, getBundle, $ResourceBundle*, $String*, $Locale*)},
		{"getBundle0", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $method(AbstractResourceBundleProvider, getBundle0, $ResourceBundle*, $Module*, $String*)},
		{"lambda$loadPropertyResourceBundle$1", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AbstractResourceBundleProvider, lambda$loadPropertyResourceBundle$1, $InputStream*, $Module*, $String*)},
		{"lambda$loadResourceBundle$0", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AbstractResourceBundleProvider, lambda$loadResourceBundle$0, $Class*, $Module*, $String*)},
		{"loadPropertyResourceBundle", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractResourceBundleProvider, loadPropertyResourceBundle, $ResourceBundle*, $Module*, $String*), "java.io.IOException"},
		{"loadResourceBundle", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractResourceBundleProvider, loadResourceBundle, $ResourceBundle*, $Module*, $String*)},
		{"toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AbstractResourceBundleProvider, toBundleName, $String*, $String*, $Locale*)},
		{"toResourceName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractResourceBundleProvider, toResourceName, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.spi.AbstractResourceBundleProvider",
		"java.lang.Object",
		"java.util.spi.ResourceBundleProvider",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AbstractResourceBundleProvider, name, initialize, &classInfo$$, AbstractResourceBundleProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractResourceBundleProvider);
	});
	return class$;
}

$Class* AbstractResourceBundleProvider::class$ = nullptr;

		} // spi
	} // util
} // java
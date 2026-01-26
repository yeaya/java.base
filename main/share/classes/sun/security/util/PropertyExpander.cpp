#include <sun/security/util/PropertyExpander.h>

#include <java/io/File.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <sun/net/www/ParseUtil.h>
#include <sun/security/util/PropertyExpander$ExpandException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $ParseUtil = ::sun::net::www::ParseUtil;
using $PropertyExpander$ExpandException = ::sun::security::util::PropertyExpander$ExpandException;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _PropertyExpander_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PropertyExpander, init$, void)},
	{"expand", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PropertyExpander, expand, $String*, $String*), "sun.security.util.PropertyExpander$ExpandException"},
	{"expand", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PropertyExpander, expand, $String*, $String*, bool), "sun.security.util.PropertyExpander$ExpandException"},
	{}
};

$InnerClassInfo _PropertyExpander_InnerClassesInfo_[] = {
	{"sun.security.util.PropertyExpander$ExpandException", "sun.security.util.PropertyExpander", "ExpandException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PropertyExpander_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.PropertyExpander",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PropertyExpander_MethodInfo_,
	nullptr,
	nullptr,
	_PropertyExpander_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.PropertyExpander$ExpandException"
};

$Object* allocate$PropertyExpander($Class* clazz) {
	return $of($alloc(PropertyExpander));
}

void PropertyExpander::init$() {
}

$String* PropertyExpander::expand($String* value) {
	return expand(value, false);
}

$String* PropertyExpander::expand($String* value, bool encodeURL) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		return nullptr;
	}
	int32_t p = $nc(value)->indexOf("${"_s, 0);
	if (p == -1) {
		return value;
	}
	$var($StringBuilder, sb, $new($StringBuilder, value->length()));
	int32_t max = value->length();
	int32_t i = 0;
	bool scanner$break = false;
	while (p < max) {
		if (p > i) {
			sb->append($(value->substring(i, p)));
			i = p;
		}
		int32_t pe = p + 2;
		if (pe < max && value->charAt(pe) == u'{') {
			pe = value->indexOf("}}"_s, pe);
			if (pe == -1 || pe + 2 == max) {
				sb->append($(value->substring(p)));
				scanner$break = true;
				break;
			} else {
				++pe;
				sb->append($(value->substring(p, pe + 1)));
			}
		} else {
			while ((pe < max) && (value->charAt(pe) != u'}')) {
				++pe;
			}
			if (pe == max) {
				sb->append($(value->substring(p, pe)));
				scanner$break = true;
				break;
			}
			$var($String, prop, value->substring(p + 2, pe));
			if (prop->equals("/"_s)) {
				$init($File);
				sb->append($File::separatorChar);
			} else {
				$var($String, val, $System::getProperty(prop));
				if (val != nullptr) {
					if (encodeURL) {
						try {
							bool var$0 = sb->length() > 0;
							if (var$0 || !($$new($URI, val))->isAbsolute()) {
								$assign(val, $ParseUtil::encodePath(val));
							}
						} catch ($URISyntaxException& use) {
							$assign(val, $ParseUtil::encodePath(val));
						}
					}
					sb->append(val);
				} else {
					$throwNew($PropertyExpander$ExpandException, $$str({"unable to expand property "_s, prop}));
				}
			}
		}
		i = pe + 1;
		p = value->indexOf("${"_s, i);
		if (p == -1) {
			if (i < max) {
				sb->append($(value->substring(i, max)));
			}
			scanner$break = true;
			break;
		}
	}
	return sb->toString();
}

PropertyExpander::PropertyExpander() {
}

$Class* PropertyExpander::load$($String* name, bool initialize) {
	$loadClass(PropertyExpander, name, initialize, &_PropertyExpander_ClassInfo_, allocate$PropertyExpander);
	return class$;
}

$Class* PropertyExpander::class$ = nullptr;

		} // util
	} // security
} // sun
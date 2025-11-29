#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>

#include <java/security/AlgorithmConstraints.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/NamedGroup$NamedGroupSpec.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SupportedGroupsExtension.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef NAMED_GROUP_FFDHE

using $NamedGroup$NamedGroupSpecArray = $Array<::sun::security::ssl::NamedGroup$NamedGroupSpec>;
using $NamedGroupArray = $Array<::sun::security::ssl::NamedGroup>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $NamedGroup$NamedGroupSpec = ::sun::security::ssl::NamedGroup$NamedGroupSpec;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SupportedGroupsExtension$SupportedGroups_FieldInfo_[] = {
	{"enableFFDHE", "Z", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension$SupportedGroups, enableFFDHE)},
	{"supportedNamedGroups", "[Lsun/security/ssl/NamedGroup;", nullptr, $STATIC | $FINAL, $staticField(SupportedGroupsExtension$SupportedGroups, supportedNamedGroups)},
	{}
};

$MethodInfo _SupportedGroupsExtension$SupportedGroups_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SupportedGroupsExtension$SupportedGroups::*)()>(&SupportedGroupsExtension$SupportedGroups::init$))},
	{"getPreferredGroup", "(Lsun/security/ssl/ProtocolVersion;Ljava/security/AlgorithmConstraints;[Lsun/security/ssl/NamedGroup$NamedGroupSpec;Ljava/util/List;)Lsun/security/ssl/NamedGroup;", "(Lsun/security/ssl/ProtocolVersion;Ljava/security/AlgorithmConstraints;[Lsun/security/ssl/NamedGroup$NamedGroupSpec;Ljava/util/List<Lsun/security/ssl/NamedGroup;>;)Lsun/security/ssl/NamedGroup;", $STATIC, $method(static_cast<$NamedGroup*(*)($ProtocolVersion*,$AlgorithmConstraints*,$NamedGroup$NamedGroupSpecArray*,$List*)>(&SupportedGroupsExtension$SupportedGroups::getPreferredGroup))},
	{"getPreferredGroup", "(Lsun/security/ssl/ProtocolVersion;Ljava/security/AlgorithmConstraints;[Lsun/security/ssl/NamedGroup$NamedGroupSpec;)Lsun/security/ssl/NamedGroup;", nullptr, $STATIC, $method(static_cast<$NamedGroup*(*)($ProtocolVersion*,$AlgorithmConstraints*,$NamedGroup$NamedGroupSpecArray*)>(&SupportedGroupsExtension$SupportedGroups::getPreferredGroup))},
	{"isActivatable", "(Ljava/security/AlgorithmConstraints;Lsun/security/ssl/NamedGroup$NamedGroupSpec;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($AlgorithmConstraints*,$NamedGroup$NamedGroupSpec*)>(&SupportedGroupsExtension$SupportedGroups::isActivatable))},
	{"isActivatable", "(Ljava/security/AlgorithmConstraints;Lsun/security/ssl/NamedGroup;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($AlgorithmConstraints*,$NamedGroup*)>(&SupportedGroupsExtension$SupportedGroups::isActivatable))},
	{"isSupported", "(Lsun/security/ssl/NamedGroup;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($NamedGroup*)>(&SupportedGroupsExtension$SupportedGroups::isSupported))},
	{}
};

$InnerClassInfo _SupportedGroupsExtension$SupportedGroups_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedGroupsExtension$SupportedGroups", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroups", $STATIC},
	{}
};

$ClassInfo _SupportedGroupsExtension$SupportedGroups_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SupportedGroupsExtension$SupportedGroups",
	"java.lang.Object",
	nullptr,
	_SupportedGroupsExtension$SupportedGroups_FieldInfo_,
	_SupportedGroupsExtension$SupportedGroups_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedGroupsExtension$SupportedGroups_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedGroupsExtension"
};

$Object* allocate$SupportedGroupsExtension$SupportedGroups($Class* clazz) {
	return $of($alloc(SupportedGroupsExtension$SupportedGroups));
}

bool SupportedGroupsExtension$SupportedGroups::enableFFDHE = false;
$NamedGroupArray* SupportedGroupsExtension$SupportedGroups::supportedNamedGroups = nullptr;

void SupportedGroupsExtension$SupportedGroups::init$() {
}

bool SupportedGroupsExtension$SupportedGroups::isActivatable($AlgorithmConstraints* constraints, $NamedGroup$NamedGroupSpec* type) {
	$init(SupportedGroupsExtension$SupportedGroups);
	bool hasFFDHEGroups = false;
	{
		$var($NamedGroupArray, arr$, SupportedGroupsExtension$SupportedGroups::supportedNamedGroups);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$NamedGroup* namedGroup = arr$->get(i$);
			{
				if ($nc(namedGroup)->isAvailable$ && namedGroup->spec == type) {
					if (namedGroup->isPermitted(constraints)) {
						return true;
					}
					$init($NamedGroup$NamedGroupSpec);
					if (!hasFFDHEGroups && (type == $NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE)) {
						hasFFDHEGroups = true;
					}
				}
			}
		}
	}
	$init($NamedGroup$NamedGroupSpec);
	return !hasFFDHEGroups && type == $NamedGroup$NamedGroupSpec::NAMED_GROUP_FFDHE;
}

bool SupportedGroupsExtension$SupportedGroups::isActivatable($AlgorithmConstraints* constraints, $NamedGroup* namedGroup) {
	$init(SupportedGroupsExtension$SupportedGroups);
	if (!$nc(namedGroup)->isAvailable$ || !isSupported(namedGroup)) {
		return false;
	}
	return $nc(namedGroup)->isPermitted(constraints);
}

bool SupportedGroupsExtension$SupportedGroups::isSupported($NamedGroup* namedGroup) {
	$init(SupportedGroupsExtension$SupportedGroups);
	{
		$var($NamedGroupArray, arr$, SupportedGroupsExtension$SupportedGroups::supportedNamedGroups);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$NamedGroup* group = arr$->get(i$);
			{
				if ($nc(namedGroup)->id == $nc(group)->id) {
					return true;
				}
			}
		}
	}
	return false;
}

$NamedGroup* SupportedGroupsExtension$SupportedGroups::getPreferredGroup($ProtocolVersion* negotiatedProtocol, $AlgorithmConstraints* constraints, $NamedGroup$NamedGroupSpecArray* types, $List* requestedNamedGroups) {
	$init(SupportedGroupsExtension$SupportedGroups);
	{
		$var($Iterator, i$, $nc(requestedNamedGroups)->iterator());
		for (; $nc(i$)->hasNext();) {
			$NamedGroup* namedGroup = $cast($NamedGroup, i$->next());
			{
				bool var$2 = ($NamedGroup$NamedGroupSpec::arrayContains(types, $nc(namedGroup)->spec));
				bool var$1 = var$2 && $nc(namedGroup)->isAvailable(negotiatedProtocol);
				bool var$0 = var$1 && isSupported(namedGroup);
				if (var$0 && namedGroup->isPermitted(constraints)) {
					return namedGroup;
				}
			}
		}
	}
	return nullptr;
}

$NamedGroup* SupportedGroupsExtension$SupportedGroups::getPreferredGroup($ProtocolVersion* negotiatedProtocol, $AlgorithmConstraints* constraints, $NamedGroup$NamedGroupSpecArray* types) {
	$init(SupportedGroupsExtension$SupportedGroups);
	{
		$var($NamedGroupArray, arr$, SupportedGroupsExtension$SupportedGroups::supportedNamedGroups);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$NamedGroup* namedGroup = arr$->get(i$);
			{
				bool var$1 = ($NamedGroup$NamedGroupSpec::arrayContains(types, $nc(namedGroup)->spec));
				bool var$0 = var$1 && $nc(namedGroup)->isAvailable(negotiatedProtocol);
				if (var$0 && namedGroup->isPermitted(constraints)) {
					return namedGroup;
				}
			}
		}
	}
	return nullptr;
}

void clinit$SupportedGroupsExtension$SupportedGroups($Class* class$) {
	$useLocalCurrentObjectStackCache();
	SupportedGroupsExtension$SupportedGroups::enableFFDHE = $Utilities::getBooleanProperty("jsse.enableFFDHE"_s, true);
	{
		$var($String, property, $GetPropertyAction::privilegedGetProperty("jdk.tls.namedGroups"_s));
		if (property != nullptr && !property->isEmpty()) {
			bool var$1 = property->length() > 1;
			bool var$0 = var$1 && property->charAt(0) == u'\"';
			if (var$0 && property->charAt(property->length() - 1) == u'\"') {
				$assign(property, property->substring(1, property->length() - 1));
			}
		}
		$var($ArrayList, groupList, nullptr);
		if (property != nullptr && !property->isEmpty()) {
			$var($StringArray, groups, property->split(","_s));
			$assign(groupList, $new($ArrayList, groups->length));
			{
				$var($StringArray, arr$, groups);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, group, arr$->get(i$));
					{
						$assign(group, $nc(group)->trim());
						if (!group->isEmpty()) {
							$NamedGroup* namedGroup = $NamedGroup::nameOf(group);
							if (namedGroup != nullptr) {
								if (namedGroup->isAvailable$) {
									groupList->add(namedGroup);
								}
							}
						}
					}
				}
			}
			if (groupList->isEmpty()) {
				$throwNew($IllegalArgumentException, $$str({"System property jdk.tls.namedGroups("_s, property, ") contains no supported named groups"_s}));
			}
		} else {
			$init($NamedGroup);
			$var($NamedGroupArray, groups, $new($NamedGroupArray, {
				$NamedGroup::X25519,
				$NamedGroup::SECP256_R1,
				$NamedGroup::SECP384_R1,
				$NamedGroup::SECP521_R1,
				$NamedGroup::X448,
				$NamedGroup::FFDHE_2048,
				$NamedGroup::FFDHE_3072,
				$NamedGroup::FFDHE_4096,
				$NamedGroup::FFDHE_6144,
				$NamedGroup::FFDHE_8192
			}));
			$assign(groupList, $new($ArrayList, groups->length));
			{
				$var($NamedGroupArray, arr$, groups);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$NamedGroup* group = arr$->get(i$);
					{
						if ($nc(group)->isAvailable$) {
							groupList->add(group);
						}
					}
				}
			}
			$init($SSLLogger);
			bool var$2 = groupList->isEmpty() && $SSLLogger::isOn$;
			if (var$2 && $SSLLogger::isOn("ssl"_s)) {
				$SSLLogger::warning("No default named groups"_s, $$new($ObjectArray, 0));
			}
		}
		$assignStatic(SupportedGroupsExtension$SupportedGroups::supportedNamedGroups, $new($NamedGroupArray, $nc(groupList)->size()));
		int32_t i = 0;
		{
			$var($Iterator, i$, groupList->iterator());
			for (; $nc(i$)->hasNext();) {
				$NamedGroup* namedGroup = $cast($NamedGroup, i$->next());
				{
					$nc(SupportedGroupsExtension$SupportedGroups::supportedNamedGroups)->set(i++, namedGroup);
				}
			}
		}
	}
}

SupportedGroupsExtension$SupportedGroups::SupportedGroupsExtension$SupportedGroups() {
}

$Class* SupportedGroupsExtension$SupportedGroups::load$($String* name, bool initialize) {
	$loadClass(SupportedGroupsExtension$SupportedGroups, name, initialize, &_SupportedGroupsExtension$SupportedGroups_ClassInfo_, clinit$SupportedGroupsExtension$SupportedGroups, allocate$SupportedGroupsExtension$SupportedGroups);
	return class$;
}

$Class* SupportedGroupsExtension$SupportedGroups::class$ = nullptr;

		} // ssl
	} // security
} // sun
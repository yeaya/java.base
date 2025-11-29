#include <sun/net/ftp/impl/FtpClient$DefaultParser.h>

#include <java/lang/CharSequence.h>
#include <java/text/DateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/net/ftp/FtpDirEntry$Type.h>
#include <sun/net/ftp/FtpDirEntry.h>
#include <sun/net/ftp/impl/FtpClient.h>
#include <jcpp.h>

#undef DIR
#undef FILE
#undef HOUR
#undef LINK
#undef MINUTE
#undef YEAR

using $booleanArray2 = $Array<bool, 2>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $FtpDirEntry = ::sun::net::ftp::FtpDirEntry;
using $FtpDirEntry$Type = ::sun::net::ftp::FtpDirEntry$Type;
using $FtpClient = ::sun::net::ftp::impl::FtpClient;

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

$FieldInfo _FtpClient$DefaultParser_FieldInfo_[] = {
	{"this$0", "Lsun/net/ftp/impl/FtpClient;", nullptr, $FINAL | $SYNTHETIC, $field(FtpClient$DefaultParser, this$0)},
	{}
};

$MethodInfo _FtpClient$DefaultParser_MethodInfo_[] = {
	{"<init>", "(Lsun/net/ftp/impl/FtpClient;)V", nullptr, $PRIVATE, $method(static_cast<void(FtpClient$DefaultParser::*)($FtpClient*)>(&FtpClient$DefaultParser::init$))},
	{"parseLine", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FtpClient$DefaultParser_InnerClassesInfo_[] = {
	{"sun.net.ftp.impl.FtpClient$DefaultParser", "sun.net.ftp.impl.FtpClient", "DefaultParser", $PRIVATE},
	{}
};

$ClassInfo _FtpClient$DefaultParser_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.ftp.impl.FtpClient$DefaultParser",
	"java.lang.Object",
	"sun.net.ftp.FtpDirParser",
	_FtpClient$DefaultParser_FieldInfo_,
	_FtpClient$DefaultParser_MethodInfo_,
	nullptr,
	nullptr,
	_FtpClient$DefaultParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.impl.FtpClient"
};

$Object* allocate$FtpClient$DefaultParser($Class* clazz) {
	return $of($alloc(FtpClient$DefaultParser));
}

void FtpClient$DefaultParser::init$($FtpClient* this$0) {
	$set(this, this$0, this$0);
}

$FtpDirEntry* FtpClient$DefaultParser::parseLine($String* line) {
	$useLocalCurrentObjectStackCache();
	$var($String, fdate, nullptr);
	$var($String, fsize, nullptr);
	$var($String, time, nullptr);
	$var($String, filename, nullptr);
	$var($String, permstring, nullptr);
	$var($String, username, nullptr);
	$var($String, groupname, nullptr);
	bool dir = false;
	$var($Calendar, now, $Calendar::getInstance());
	int32_t year = $nc(now)->get($Calendar::YEAR);
	$var($Matcher, m, nullptr);
	$init($FtpClient);
	for (int32_t j = 0; j < $nc($FtpClient::patterns)->length; ++j) {
		$assign(m, $nc($nc($FtpClient::patterns)->get(j))->matcher(line));
		if ($nc(m)->find()) {
			$assign(filename, m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(0)));
			$assign(fsize, m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(1)));
			$assign(fdate, m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(2)));
			if ($nc($nc($FtpClient::patternGroups)->get(j))->get(4) > 0) {
				$plusAssign(fdate, ($$str({", "_s, $(m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(4)))})));
			} else {
				if ($nc($nc($FtpClient::patternGroups)->get(j))->get(3) > 0) {
					$plusAssign(fdate, ($$str({", "_s, $($String::valueOf(year))})));
				}
			}
			if ($nc($nc($FtpClient::patternGroups)->get(j))->get(3) > 0) {
				$assign(time, m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(3)));
			}
			if ($nc($nc($FtpClient::patternGroups)->get(j))->get(5) > 0) {
				$assign(permstring, m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(5)));
				dir = $nc(permstring)->startsWith("d"_s);
			}
			if ($nc($nc($FtpClient::patternGroups)->get(j))->get(6) > 0) {
				$assign(username, m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(6)));
			}
			if ($nc($nc($FtpClient::patternGroups)->get(j))->get(7) > 0) {
				$assign(groupname, m->group($nc($nc($FtpClient::patternGroups)->get(j))->get(7)));
			}
			if ("<DIR>"_s->equals(fsize)) {
				dir = true;
				$assign(fsize, nullptr);
			}
		}
	}
	if (filename != nullptr) {
		$var($Date, d, nullptr);
		try {
			$assign(d, $nc(this->this$0->df)->parse(fdate));
		} catch ($Exception& e) {
			$assign(d, nullptr);
		}
		if (d != nullptr && time != nullptr) {
			int32_t c = time->indexOf((int32_t)u':');
			now->setTime(d);
			now->set($Calendar::HOUR, $Integer::parseInt(time, 0, c, 10));
			now->set($Calendar::MINUTE, $Integer::parseInt(time, c + 1, time->length(), 10));
			$assign(d, now->getTime());
		}
		$var($Matcher, m2, $nc($FtpClient::linkp)->matcher(filename));
		if ($nc(m2)->find()) {
			$assign(filename, m2->group(1));
		}
		$var($booleanArray2, perms, $new($booleanArray2, 3, 3));
		for (int32_t i = 0; i < 3; ++i) {
			for (int32_t j = 0; j < 3; ++j) {
				$nc(perms->get(i))->set(j, ($nc(permstring)->charAt((i * 3) + j) != u'-'));
			}
		}
		$var($FtpDirEntry, file, $new($FtpDirEntry, filename));
		$nc($(file->setUser(username)))->setGroup(groupname);
		$nc($(file->setSize($Long::parseLong(fsize))))->setLastModified(d);
		file->setPermissions(perms);
		$init($FtpDirEntry$Type);
		file->setType(dir ? $FtpDirEntry$Type::DIR : ($nc(line)->charAt(0) == u'l' ? $FtpDirEntry$Type::LINK : $FtpDirEntry$Type::FILE));
		return file;
	}
	return nullptr;
}

FtpClient$DefaultParser::FtpClient$DefaultParser() {
}

$Class* FtpClient$DefaultParser::load$($String* name, bool initialize) {
	$loadClass(FtpClient$DefaultParser, name, initialize, &_FtpClient$DefaultParser_ClassInfo_, allocate$FtpClient$DefaultParser);
	return class$;
}

$Class* FtpClient$DefaultParser::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun
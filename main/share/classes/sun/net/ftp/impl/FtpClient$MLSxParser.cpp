#include <sun/net/ftp/impl/FtpClient$MLSxParser.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Date.h>
#include <sun/net/ftp/FtpDirEntry$Type.h>
#include <sun/net/ftp/FtpDirEntry.h>
#include <sun/net/ftp/impl/FtpClient.h>
#include <jcpp.h>

#undef CDIR
#undef DIR
#undef FILE
#undef PDIR

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $FtpDirEntry = ::sun::net::ftp::FtpDirEntry;
using $FtpDirEntry$Type = ::sun::net::ftp::FtpDirEntry$Type;
using $FtpDirParser = ::sun::net::ftp::FtpDirParser;
using $FtpClient = ::sun::net::ftp::impl::FtpClient;

namespace sun {
	namespace net {
		namespace ftp {
			namespace impl {

$MethodInfo _FtpClient$MLSxParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FtpClient$MLSxParser::*)()>(&FtpClient$MLSxParser::init$))},
	{"parseLine", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FtpClient$MLSxParser_InnerClassesInfo_[] = {
	{"sun.net.ftp.impl.FtpClient$MLSxParser", "sun.net.ftp.impl.FtpClient", "MLSxParser", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FtpClient$MLSxParser_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.ftp.impl.FtpClient$MLSxParser",
	"java.lang.Object",
	"sun.net.ftp.FtpDirParser",
	nullptr,
	_FtpClient$MLSxParser_MethodInfo_,
	nullptr,
	nullptr,
	_FtpClient$MLSxParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.ftp.impl.FtpClient"
};

$Object* allocate$FtpClient$MLSxParser($Class* clazz) {
	return $of($alloc(FtpClient$MLSxParser));
}

void FtpClient$MLSxParser::init$() {
}

$FtpDirEntry* FtpClient$MLSxParser::parseLine($String* line$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, line, line$renamed);
	$var($String, name, nullptr);
	int32_t i = $nc(line)->lastIndexOf((int32_t)u';');
	if (i > 0) {
		$assign(name, $(line->substring(i + 1))->trim());
		$assign(line, line->substring(0, i));
	} else {
		$assign(name, line->trim());
		$assign(line, ""_s);
	}
	$var($FtpDirEntry, file, $new($FtpDirEntry, name));
	while (!line->isEmpty()) {
		$var($String, s, nullptr);
		i = line->indexOf((int32_t)u';');
		if (i > 0) {
			$assign(s, line->substring(0, i));
			$assign(line, line->substring(i + 1));
		} else {
			$assign(s, line);
			$assign(line, ""_s);
		}
		i = $nc(s)->indexOf((int32_t)u'=');
		if (i > 0) {
			$var($String, fact, s->substring(0, i));
			$var($String, value, s->substring(i + 1));
			file->addFact(fact, value);
		}
	}
	$var($String, s, file->getFact("Size"_s));
	if (s != nullptr) {
		file->setSize($Long::parseLong(s));
	}
	$assign(s, file->getFact("Modify"_s));
	if (s != nullptr) {
		$var($Date, d, $FtpClient::parseRfc3659TimeValue(s));
		if (d != nullptr) {
			file->setLastModified(d);
		}
	}
	$assign(s, file->getFact("Create"_s));
	if (s != nullptr) {
		$var($Date, d, $FtpClient::parseRfc3659TimeValue(s));
		if (d != nullptr) {
			file->setCreated(d);
		}
	}
	$assign(s, file->getFact("Type"_s));
	if (s != nullptr) {
		if (s->equalsIgnoreCase("file"_s)) {
			$init($FtpDirEntry$Type);
			file->setType($FtpDirEntry$Type::FILE);
		}
		if (s->equalsIgnoreCase("dir"_s)) {
			$init($FtpDirEntry$Type);
			file->setType($FtpDirEntry$Type::DIR);
		}
		if (s->equalsIgnoreCase("cdir"_s)) {
			$init($FtpDirEntry$Type);
			file->setType($FtpDirEntry$Type::CDIR);
		}
		if (s->equalsIgnoreCase("pdir"_s)) {
			$init($FtpDirEntry$Type);
			file->setType($FtpDirEntry$Type::PDIR);
		}
	}
	return file;
}

FtpClient$MLSxParser::FtpClient$MLSxParser() {
}

$Class* FtpClient$MLSxParser::load$($String* name, bool initialize) {
	$loadClass(FtpClient$MLSxParser, name, initialize, &_FtpClient$MLSxParser_ClassInfo_, allocate$FtpClient$MLSxParser);
	return class$;
}

$Class* FtpClient$MLSxParser::class$ = nullptr;

			} // impl
		} // ftp
	} // net
} // sun
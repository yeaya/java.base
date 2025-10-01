#ifndef _sun_net_www_MimeTable_h_
#define _sun_net_www_MimeTable_h_
//$ class sun.net.www.MimeTable
//$ extends java.net.FileNameMap

#include <java/lang/Array.h>
#include <java/net/FileNameMap.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
		class Properties;
	}
}
namespace sun {
	namespace net {
		namespace www {
			class MimeEntry;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {

class $import MimeTable : public ::java::net::FileNameMap {
	$class(MimeTable, 0, ::java::net::FileNameMap)
public:
	MimeTable();
	void init$();
	virtual void add(::sun::net::www::MimeEntry* m);
	virtual ::java::util::Enumeration* elements();
	virtual void fill(::sun::net::www::MimeEntry* entry, $String* name, $String* value);
	virtual ::sun::net::www::MimeEntry* find($String* type);
	virtual ::sun::net::www::MimeEntry* findByDescription($String* description);
	virtual ::sun::net::www::MimeEntry* findByExt($String* fileExtension);
	virtual ::sun::net::www::MimeEntry* findByFileName($String* fname);
	virtual int32_t getActionCode($String* action);
	virtual ::java::util::Properties* getAsProperties();
	virtual $String* getContentTypeFor($String* fileName) override;
	static ::sun::net::www::MimeTable* getDefaultTable();
	virtual $StringArray* getExtensions($String* list);
	virtual int32_t getSize();
	virtual $String* getTempFileTemplate();
	virtual void load();
	static ::java::net::FileNameMap* loadTable();
	virtual void parse(::java::util::Properties* entries);
	virtual void parse($String* type, $String* attrs);
	virtual void parse($String* pair, ::sun::net::www::MimeEntry* entry);
	virtual ::sun::net::www::MimeEntry* remove($String* type);
	virtual ::sun::net::www::MimeEntry* remove(::sun::net::www::MimeEntry* entry);
	virtual bool saveAsProperties(::java::io::File* file);
	::java::util::Hashtable* entries = nullptr;
	::java::util::Hashtable* extensionMap = nullptr;
	static $String* tempFileTemplate;
	static $String* filePreamble;
	static $String* fileMagic;
	static $StringArray* mailcapLocations;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_MimeTable_h_
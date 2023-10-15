#ifndef CONFIGFACTORY_HPP
# define CONFIGFACTORY_HPP

# include "virtualServer/VirtualServer.hpp"
# include "virtualServer/Location.hpp"
# include "config/ConfigContext.hpp"

# include <vector>

class ConfigFactory
{
public:
	ConfigFactory(void);
	ConfigFactory(const ConfigFactory &other);
	~ConfigFactory(void);

	ConfigFactory &operator=(const ConfigFactory &other);

	static std::vector<virtualServer>	createVirtualServers(const Context& mainContext);

private:
	static virtualServer			_createVirtualServer(const Context& serverContext);
//	static std::vector<Location>	_createLocations(const Context& locationContext);
	static Location				_createLocation(const Context& locationContext);
};

#endif
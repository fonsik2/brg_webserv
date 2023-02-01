#ifndef WEBSERV_HPP
# define WEBSERV_HPP

# include <cstdlib>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/time.h>
# include <sys/resource.h>
# include <csignal>
# include <dirent.h>
# include <cstring>
# include <cerrno>
# include <ctime>
# include <sys/select.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <queue>
# include <stack>
# include <map>
# include <algorithm>
# include <iterator>

# include "Config.hpp"
# include "Parser.hpp"
# include "Client.hpp"
# include "Logger.hpp"
# include "Utils.hpp"

extern Config gConfig;

#endif
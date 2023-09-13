// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EVENTBRIDGE20200401_H_
#define ALIBABACLOUD_EVENTBRIDGE20200401_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eventbridge20200401 {
class CreateApiDestinationRequestHttpApiParameters : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> method{};

  CreateApiDestinationRequestHttpApiParameters() {}

  explicit CreateApiDestinationRequestHttpApiParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
  }


  virtual ~CreateApiDestinationRequestHttpApiParameters() = default;
};
class CreateApiDestinationRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<CreateApiDestinationRequestHttpApiParameters> httpApiParameters{};

  CreateApiDestinationRequest() {}

  explicit CreateApiDestinationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (httpApiParameters) {
      res["HttpApiParameters"] = httpApiParameters ? boost::any(httpApiParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HttpApiParameters") != m.end() && !m["HttpApiParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpApiParameters"].type()) {
        CreateApiDestinationRequestHttpApiParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpApiParameters"]));
        httpApiParameters = make_shared<CreateApiDestinationRequestHttpApiParameters>(model1);
      }
    }
  }


  virtual ~CreateApiDestinationRequest() = default;
};
class CreateApiDestinationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<string> httpApiParametersShrink{};

  CreateApiDestinationShrinkRequest() {}

  explicit CreateApiDestinationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (httpApiParametersShrink) {
      res["HttpApiParameters"] = boost::any(*httpApiParametersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HttpApiParameters") != m.end() && !m["HttpApiParameters"].empty()) {
      httpApiParametersShrink = make_shared<string>(boost::any_cast<string>(m["HttpApiParameters"]));
    }
  }


  virtual ~CreateApiDestinationShrinkRequest() = default;
};
class CreateApiDestinationResponseBodyDate : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};

  CreateApiDestinationResponseBodyDate() {}

  explicit CreateApiDestinationResponseBodyDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
  }


  virtual ~CreateApiDestinationResponseBodyDate() = default;
};
class CreateApiDestinationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateApiDestinationResponseBodyDate> date{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateApiDestinationResponseBody() {}

  explicit CreateApiDestinationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (date) {
      res["Date"] = date ? boost::any(date->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      if (typeid(map<string, boost::any>) == m["Date"].type()) {
        CreateApiDestinationResponseBodyDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Date"]));
        date = make_shared<CreateApiDestinationResponseBodyDate>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApiDestinationResponseBody() = default;
};
class CreateApiDestinationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApiDestinationResponseBody> body{};

  CreateApiDestinationResponse() {}

  explicit CreateApiDestinationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApiDestinationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApiDestinationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApiDestinationResponse() = default;
};
class CreateConnectionRequestAuthParametersApiKeyAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> apiKeyName{};
  shared_ptr<string> apiKeyValue{};

  CreateConnectionRequestAuthParametersApiKeyAuthParameters() {}

  explicit CreateConnectionRequestAuthParametersApiKeyAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyName) {
      res["ApiKeyName"] = boost::any(*apiKeyName);
    }
    if (apiKeyValue) {
      res["ApiKeyValue"] = boost::any(*apiKeyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyName") != m.end() && !m["ApiKeyName"].empty()) {
      apiKeyName = make_shared<string>(boost::any_cast<string>(m["ApiKeyName"]));
    }
    if (m.find("ApiKeyValue") != m.end() && !m["ApiKeyValue"].empty()) {
      apiKeyValue = make_shared<string>(boost::any_cast<string>(m["ApiKeyValue"]));
    }
  }


  virtual ~CreateConnectionRequestAuthParametersApiKeyAuthParameters() = default;
};
class CreateConnectionRequestAuthParametersBasicAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  CreateConnectionRequestAuthParametersBasicAuthParameters() {}

  explicit CreateConnectionRequestAuthParametersBasicAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~CreateConnectionRequestAuthParametersBasicAuthParameters() = default;
};
class CreateConnectionRequestAuthParametersOAuthParametersClientParameters : public Darabonba::Model {
public:
  shared_ptr<string> clientID{};
  shared_ptr<string> clientSecret{};

  CreateConnectionRequestAuthParametersOAuthParametersClientParameters() {}

  explicit CreateConnectionRequestAuthParametersOAuthParametersClientParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientID) {
      res["ClientID"] = boost::any(*clientID);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientID") != m.end() && !m["ClientID"].empty()) {
      clientID = make_shared<string>(boost::any_cast<string>(m["ClientID"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
  }


  virtual ~CreateConnectionRequestAuthParametersOAuthParametersClientParameters() = default;
};
class CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() {}

  explicit CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() = default;
};
class CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() {}

  explicit CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() = default;
};
class CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() {}

  explicit CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() = default;
};
class CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
public:
  shared_ptr<vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters{};
  shared_ptr<vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters{};
  shared_ptr<vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters{};

  CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() {}

  explicit CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyParameters) {
      vector<boost::any> temp1;
      for(auto item1:*bodyParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyParameters"] = boost::any(temp1);
    }
    if (headerParameters) {
      vector<boost::any> temp1;
      for(auto item1:*headerParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HeaderParameters"] = boost::any(temp1);
    }
    if (queryStringParameters) {
      vector<boost::any> temp1;
      for(auto item1:*queryStringParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueryStringParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyParameters") != m.end() && !m["BodyParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyParameters"].type()) {
        vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyParameters = make_shared<vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>>(expect1);
      }
    }
    if (m.find("HeaderParameters") != m.end() && !m["HeaderParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HeaderParameters"].type()) {
        vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HeaderParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerParameters = make_shared<vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>>(expect1);
      }
    }
    if (m.find("QueryStringParameters") != m.end() && !m["QueryStringParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["QueryStringParameters"].type()) {
        vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueryStringParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryStringParameters = make_shared<vector<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>>(expect1);
      }
    }
  }


  virtual ~CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() = default;
};
class CreateConnectionRequestAuthParametersOAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> authorizationEndpoint{};
  shared_ptr<CreateConnectionRequestAuthParametersOAuthParametersClientParameters> clientParameters{};
  shared_ptr<string> httpMethod{};
  shared_ptr<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters{};

  CreateConnectionRequestAuthParametersOAuthParameters() {}

  explicit CreateConnectionRequestAuthParametersOAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationEndpoint) {
      res["AuthorizationEndpoint"] = boost::any(*authorizationEndpoint);
    }
    if (clientParameters) {
      res["ClientParameters"] = clientParameters ? boost::any(clientParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (OAuthHttpParameters) {
      res["OAuthHttpParameters"] = OAuthHttpParameters ? boost::any(OAuthHttpParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationEndpoint") != m.end() && !m["AuthorizationEndpoint"].empty()) {
      authorizationEndpoint = make_shared<string>(boost::any_cast<string>(m["AuthorizationEndpoint"]));
    }
    if (m.find("ClientParameters") != m.end() && !m["ClientParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientParameters"].type()) {
        CreateConnectionRequestAuthParametersOAuthParametersClientParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientParameters"]));
        clientParameters = make_shared<CreateConnectionRequestAuthParametersOAuthParametersClientParameters>(model1);
      }
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("OAuthHttpParameters") != m.end() && !m["OAuthHttpParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthHttpParameters"].type()) {
        CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthHttpParameters"]));
        OAuthHttpParameters = make_shared<CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters>(model1);
      }
    }
  }


  virtual ~CreateConnectionRequestAuthParametersOAuthParameters() = default;
};
class CreateConnectionRequestAuthParameters : public Darabonba::Model {
public:
  shared_ptr<CreateConnectionRequestAuthParametersApiKeyAuthParameters> apiKeyAuthParameters{};
  shared_ptr<string> authorizationType{};
  shared_ptr<CreateConnectionRequestAuthParametersBasicAuthParameters> basicAuthParameters{};
  shared_ptr<CreateConnectionRequestAuthParametersOAuthParameters> OAuthParameters{};

  CreateConnectionRequestAuthParameters() {}

  explicit CreateConnectionRequestAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyAuthParameters) {
      res["ApiKeyAuthParameters"] = apiKeyAuthParameters ? boost::any(apiKeyAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authorizationType) {
      res["AuthorizationType"] = boost::any(*authorizationType);
    }
    if (basicAuthParameters) {
      res["BasicAuthParameters"] = basicAuthParameters ? boost::any(basicAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OAuthParameters) {
      res["OAuthParameters"] = OAuthParameters ? boost::any(OAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyAuthParameters") != m.end() && !m["ApiKeyAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiKeyAuthParameters"].type()) {
        CreateConnectionRequestAuthParametersApiKeyAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiKeyAuthParameters"]));
        apiKeyAuthParameters = make_shared<CreateConnectionRequestAuthParametersApiKeyAuthParameters>(model1);
      }
    }
    if (m.find("AuthorizationType") != m.end() && !m["AuthorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["AuthorizationType"]));
    }
    if (m.find("BasicAuthParameters") != m.end() && !m["BasicAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["BasicAuthParameters"].type()) {
        CreateConnectionRequestAuthParametersBasicAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BasicAuthParameters"]));
        basicAuthParameters = make_shared<CreateConnectionRequestAuthParametersBasicAuthParameters>(model1);
      }
    }
    if (m.find("OAuthParameters") != m.end() && !m["OAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthParameters"].type()) {
        CreateConnectionRequestAuthParametersOAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthParameters"]));
        OAuthParameters = make_shared<CreateConnectionRequestAuthParametersOAuthParameters>(model1);
      }
    }
  }


  virtual ~CreateConnectionRequestAuthParameters() = default;
};
class CreateConnectionRequestNetworkParameters : public Darabonba::Model {
public:
  shared_ptr<string> networkType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitcheId{};

  CreateConnectionRequestNetworkParameters() {}

  explicit CreateConnectionRequestNetworkParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitcheId) {
      res["VswitcheId"] = boost::any(*vswitcheId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitcheId") != m.end() && !m["VswitcheId"].empty()) {
      vswitcheId = make_shared<string>(boost::any_cast<string>(m["VswitcheId"]));
    }
  }


  virtual ~CreateConnectionRequestNetworkParameters() = default;
};
class CreateConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<CreateConnectionRequestAuthParameters> authParameters{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<CreateConnectionRequestNetworkParameters> networkParameters{};

  CreateConnectionRequest() {}

  explicit CreateConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authParameters) {
      res["AuthParameters"] = authParameters ? boost::any(authParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (networkParameters) {
      res["NetworkParameters"] = networkParameters ? boost::any(networkParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthParameters") != m.end() && !m["AuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthParameters"].type()) {
        CreateConnectionRequestAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthParameters"]));
        authParameters = make_shared<CreateConnectionRequestAuthParameters>(model1);
      }
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NetworkParameters") != m.end() && !m["NetworkParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkParameters"].type()) {
        CreateConnectionRequestNetworkParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkParameters"]));
        networkParameters = make_shared<CreateConnectionRequestNetworkParameters>(model1);
      }
    }
  }


  virtual ~CreateConnectionRequest() = default;
};
class CreateConnectionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> authParametersShrink{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<string> networkParametersShrink{};

  CreateConnectionShrinkRequest() {}

  explicit CreateConnectionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authParametersShrink) {
      res["AuthParameters"] = boost::any(*authParametersShrink);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (networkParametersShrink) {
      res["NetworkParameters"] = boost::any(*networkParametersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthParameters") != m.end() && !m["AuthParameters"].empty()) {
      authParametersShrink = make_shared<string>(boost::any_cast<string>(m["AuthParameters"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NetworkParameters") != m.end() && !m["NetworkParameters"].empty()) {
      networkParametersShrink = make_shared<string>(boost::any_cast<string>(m["NetworkParameters"]));
    }
  }


  virtual ~CreateConnectionShrinkRequest() = default;
};
class CreateConnectionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> connectionName{};

  CreateConnectionResponseBodyData() {}

  explicit CreateConnectionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
  }


  virtual ~CreateConnectionResponseBodyData() = default;
};
class CreateConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateConnectionResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateConnectionResponseBody() {}

  explicit CreateConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateConnectionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateConnectionResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConnectionResponseBody() = default;
};
class CreateConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConnectionResponseBody> body{};

  CreateConnectionResponse() {}

  explicit CreateConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConnectionResponse() = default;
};
class CreateEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};

  CreateEventBusRequest() {}

  explicit CreateEventBusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }


  virtual ~CreateEventBusRequest() = default;
};
class CreateEventBusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> eventBusARN{};

  CreateEventBusResponseBodyData() {}

  explicit CreateEventBusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusARN) {
      res["EventBusARN"] = boost::any(*eventBusARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN = make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
  }


  virtual ~CreateEventBusResponseBodyData() = default;
};
class CreateEventBusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEventBusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateEventBusResponseBody() {}

  explicit CreateEventBusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateEventBusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateEventBusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEventBusResponseBody() = default;
};
class CreateEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEventBusResponseBody> body{};

  CreateEventBusResponse() {}

  explicit CreateEventBusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEventBusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEventBusResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEventBusResponse() = default;
};
class CreateEventSourceRequestSourceHttpEventParameters : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ip{};
  shared_ptr<vector<string>> method{};
  shared_ptr<vector<string>> referer{};
  shared_ptr<string> securityConfig{};
  shared_ptr<string> type{};

  CreateEventSourceRequestSourceHttpEventParameters() {}

  explicit CreateEventSourceRequestSourceHttpEventParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (referer) {
      res["Referer"] = boost::any(*referer);
    }
    if (securityConfig) {
      res["SecurityConfig"] = boost::any(*securityConfig);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Method"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Method"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      method = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Referer") != m.end() && !m["Referer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Referer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Referer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      referer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityConfig") != m.end() && !m["SecurityConfig"].empty()) {
      securityConfig = make_shared<string>(boost::any_cast<string>(m["SecurityConfig"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateEventSourceRequestSourceHttpEventParameters() = default;
};
class CreateEventSourceRequestSourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maximumTasks{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  CreateEventSourceRequestSourceKafkaParameters() {}

  explicit CreateEventSourceRequestSourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<long>(boost::any_cast<long>(m["MaximumTasks"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateEventSourceRequestSourceKafkaParameters() = default;
};
class CreateEventSourceRequestSourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  CreateEventSourceRequestSourceMNSParameters() {}

  explicit CreateEventSourceRequestSourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateEventSourceRequestSourceMNSParameters() = default;
};
class CreateEventSourceRequestSourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  CreateEventSourceRequestSourceRabbitMQParameters() {}

  explicit CreateEventSourceRequestSourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~CreateEventSourceRequestSourceRabbitMQParameters() = default;
};
class CreateEventSourceRequestSourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceEndpoint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceNetwork{};
  shared_ptr<string> instancePassword{};
  shared_ptr<string> instanceSecurityGroupId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceUsername{};
  shared_ptr<string> instanceVSwitchIds{};
  shared_ptr<string> instanceVpcId{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tag{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> topic{};

  CreateEventSourceRequestSourceRocketMQParameters() {}

  explicit CreateEventSourceRequestSourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceEndpoint) {
      res["InstanceEndpoint"] = boost::any(*instanceEndpoint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNetwork) {
      res["InstanceNetwork"] = boost::any(*instanceNetwork);
    }
    if (instancePassword) {
      res["InstancePassword"] = boost::any(*instancePassword);
    }
    if (instanceSecurityGroupId) {
      res["InstanceSecurityGroupId"] = boost::any(*instanceSecurityGroupId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceUsername) {
      res["InstanceUsername"] = boost::any(*instanceUsername);
    }
    if (instanceVSwitchIds) {
      res["InstanceVSwitchIds"] = boost::any(*instanceVSwitchIds);
    }
    if (instanceVpcId) {
      res["InstanceVpcId"] = boost::any(*instanceVpcId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceEndpoint") != m.end() && !m["InstanceEndpoint"].empty()) {
      instanceEndpoint = make_shared<string>(boost::any_cast<string>(m["InstanceEndpoint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNetwork") != m.end() && !m["InstanceNetwork"].empty()) {
      instanceNetwork = make_shared<string>(boost::any_cast<string>(m["InstanceNetwork"]));
    }
    if (m.find("InstancePassword") != m.end() && !m["InstancePassword"].empty()) {
      instancePassword = make_shared<string>(boost::any_cast<string>(m["InstancePassword"]));
    }
    if (m.find("InstanceSecurityGroupId") != m.end() && !m["InstanceSecurityGroupId"].empty()) {
      instanceSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceSecurityGroupId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceUsername") != m.end() && !m["InstanceUsername"].empty()) {
      instanceUsername = make_shared<string>(boost::any_cast<string>(m["InstanceUsername"]));
    }
    if (m.find("InstanceVSwitchIds") != m.end() && !m["InstanceVSwitchIds"].empty()) {
      instanceVSwitchIds = make_shared<string>(boost::any_cast<string>(m["InstanceVSwitchIds"]));
    }
    if (m.find("InstanceVpcId") != m.end() && !m["InstanceVpcId"].empty()) {
      instanceVpcId = make_shared<string>(boost::any_cast<string>(m["InstanceVpcId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~CreateEventSourceRequestSourceRocketMQParameters() = default;
};
class CreateEventSourceRequestSourceSLSParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumePosition{};
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};
  shared_ptr<string> roleName{};

  CreateEventSourceRequestSourceSLSParameters() {}

  explicit CreateEventSourceRequestSourceSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumePosition) {
      res["ConsumePosition"] = boost::any(*consumePosition);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumePosition") != m.end() && !m["ConsumePosition"].empty()) {
      consumePosition = make_shared<string>(boost::any_cast<string>(m["ConsumePosition"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateEventSourceRequestSourceSLSParameters() = default;
};
class CreateEventSourceRequestSourceScheduledEventParameters : public Darabonba::Model {
public:
  shared_ptr<string> schedule{};
  shared_ptr<string> timeZone{};
  shared_ptr<map<string, boost::any>> userData{};

  CreateEventSourceRequestSourceScheduledEventParameters() {}

  explicit CreateEventSourceRequestSourceScheduledEventParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["UserData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userData = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateEventSourceRequestSourceScheduledEventParameters() = default;
};
class CreateEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSourceName{};
  shared_ptr<CreateEventSourceRequestSourceHttpEventParameters> sourceHttpEventParameters{};
  shared_ptr<CreateEventSourceRequestSourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<CreateEventSourceRequestSourceMNSParameters> sourceMNSParameters{};
  shared_ptr<CreateEventSourceRequestSourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<CreateEventSourceRequestSourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<CreateEventSourceRequestSourceSLSParameters> sourceSLSParameters{};
  shared_ptr<CreateEventSourceRequestSourceScheduledEventParameters> sourceScheduledEventParameters{};

  CreateEventSourceRequest() {}

  explicit CreateEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (sourceHttpEventParameters) {
      res["SourceHttpEventParameters"] = sourceHttpEventParameters ? boost::any(sourceHttpEventParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceSLSParameters) {
      res["SourceSLSParameters"] = sourceSLSParameters ? boost::any(sourceSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceScheduledEventParameters) {
      res["SourceScheduledEventParameters"] = sourceScheduledEventParameters ? boost::any(sourceScheduledEventParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("SourceHttpEventParameters") != m.end() && !m["SourceHttpEventParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceHttpEventParameters"].type()) {
        CreateEventSourceRequestSourceHttpEventParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceHttpEventParameters"]));
        sourceHttpEventParameters = make_shared<CreateEventSourceRequestSourceHttpEventParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        CreateEventSourceRequestSourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<CreateEventSourceRequestSourceKafkaParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        CreateEventSourceRequestSourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<CreateEventSourceRequestSourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        CreateEventSourceRequestSourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<CreateEventSourceRequestSourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        CreateEventSourceRequestSourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<CreateEventSourceRequestSourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceSLSParameters"].type()) {
        CreateEventSourceRequestSourceSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceSLSParameters"]));
        sourceSLSParameters = make_shared<CreateEventSourceRequestSourceSLSParameters>(model1);
      }
    }
    if (m.find("SourceScheduledEventParameters") != m.end() && !m["SourceScheduledEventParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceScheduledEventParameters"].type()) {
        CreateEventSourceRequestSourceScheduledEventParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceScheduledEventParameters"]));
        sourceScheduledEventParameters = make_shared<CreateEventSourceRequestSourceScheduledEventParameters>(model1);
      }
    }
  }


  virtual ~CreateEventSourceRequest() = default;
};
class CreateEventSourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSourceName{};
  shared_ptr<string> sourceHttpEventParametersShrink{};
  shared_ptr<string> sourceKafkaParametersShrink{};
  shared_ptr<string> sourceMNSParametersShrink{};
  shared_ptr<string> sourceRabbitMQParametersShrink{};
  shared_ptr<string> sourceRocketMQParametersShrink{};
  shared_ptr<string> sourceSLSParametersShrink{};
  shared_ptr<string> sourceScheduledEventParametersShrink{};

  CreateEventSourceShrinkRequest() {}

  explicit CreateEventSourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (sourceHttpEventParametersShrink) {
      res["SourceHttpEventParameters"] = boost::any(*sourceHttpEventParametersShrink);
    }
    if (sourceKafkaParametersShrink) {
      res["SourceKafkaParameters"] = boost::any(*sourceKafkaParametersShrink);
    }
    if (sourceMNSParametersShrink) {
      res["SourceMNSParameters"] = boost::any(*sourceMNSParametersShrink);
    }
    if (sourceRabbitMQParametersShrink) {
      res["SourceRabbitMQParameters"] = boost::any(*sourceRabbitMQParametersShrink);
    }
    if (sourceRocketMQParametersShrink) {
      res["SourceRocketMQParameters"] = boost::any(*sourceRocketMQParametersShrink);
    }
    if (sourceSLSParametersShrink) {
      res["SourceSLSParameters"] = boost::any(*sourceSLSParametersShrink);
    }
    if (sourceScheduledEventParametersShrink) {
      res["SourceScheduledEventParameters"] = boost::any(*sourceScheduledEventParametersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("SourceHttpEventParameters") != m.end() && !m["SourceHttpEventParameters"].empty()) {
      sourceHttpEventParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceHttpEventParameters"]));
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      sourceKafkaParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceKafkaParameters"]));
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      sourceMNSParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceMNSParameters"]));
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      sourceRabbitMQParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceRabbitMQParameters"]));
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      sourceRocketMQParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceRocketMQParameters"]));
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      sourceSLSParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceSLSParameters"]));
    }
    if (m.find("SourceScheduledEventParameters") != m.end() && !m["SourceScheduledEventParameters"].empty()) {
      sourceScheduledEventParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceScheduledEventParameters"]));
    }
  }


  virtual ~CreateEventSourceShrinkRequest() = default;
};
class CreateEventSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> eventSourceARN{};

  CreateEventSourceResponseBodyData() {}

  explicit CreateEventSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceARN) {
      res["EventSourceARN"] = boost::any(*eventSourceARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSourceARN") != m.end() && !m["EventSourceARN"].empty()) {
      eventSourceARN = make_shared<string>(boost::any_cast<string>(m["EventSourceARN"]));
    }
  }


  virtual ~CreateEventSourceResponseBodyData() = default;
};
class CreateEventSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEventSourceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateEventSourceResponseBody() {}

  explicit CreateEventSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateEventSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateEventSourceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEventSourceResponseBody() = default;
};
class CreateEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEventSourceResponseBody> body{};

  CreateEventSourceResponse() {}

  explicit CreateEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEventSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEventSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEventSourceResponse() = default;
};
class CreateEventStreamingRequestRunOptionsBatchWindow : public Darabonba::Model {
public:
  shared_ptr<long> countBasedWindow{};
  shared_ptr<long> timeBasedWindow{};

  CreateEventStreamingRequestRunOptionsBatchWindow() {}

  explicit CreateEventStreamingRequestRunOptionsBatchWindow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countBasedWindow) {
      res["CountBasedWindow"] = boost::any(*countBasedWindow);
    }
    if (timeBasedWindow) {
      res["TimeBasedWindow"] = boost::any(*timeBasedWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountBasedWindow") != m.end() && !m["CountBasedWindow"].empty()) {
      countBasedWindow = make_shared<long>(boost::any_cast<long>(m["CountBasedWindow"]));
    }
    if (m.find("TimeBasedWindow") != m.end() && !m["TimeBasedWindow"].empty()) {
      timeBasedWindow = make_shared<long>(boost::any_cast<long>(m["TimeBasedWindow"]));
    }
  }


  virtual ~CreateEventStreamingRequestRunOptionsBatchWindow() = default;
};
class CreateEventStreamingRequestRunOptionsDeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  CreateEventStreamingRequestRunOptionsDeadLetterQueue() {}

  explicit CreateEventStreamingRequestRunOptionsDeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~CreateEventStreamingRequestRunOptionsDeadLetterQueue() = default;
};
class CreateEventStreamingRequestRunOptionsRetryStrategy : public Darabonba::Model {
public:
  shared_ptr<long> maximumEventAgeInSeconds{};
  shared_ptr<long> maximumRetryAttempts{};
  shared_ptr<string> pushRetryStrategy{};

  CreateEventStreamingRequestRunOptionsRetryStrategy() {}

  explicit CreateEventStreamingRequestRunOptionsRetryStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumEventAgeInSeconds) {
      res["MaximumEventAgeInSeconds"] = boost::any(*maximumEventAgeInSeconds);
    }
    if (maximumRetryAttempts) {
      res["MaximumRetryAttempts"] = boost::any(*maximumRetryAttempts);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaximumEventAgeInSeconds") != m.end() && !m["MaximumEventAgeInSeconds"].empty()) {
      maximumEventAgeInSeconds = make_shared<long>(boost::any_cast<long>(m["MaximumEventAgeInSeconds"]));
    }
    if (m.find("MaximumRetryAttempts") != m.end() && !m["MaximumRetryAttempts"].empty()) {
      maximumRetryAttempts = make_shared<long>(boost::any_cast<long>(m["MaximumRetryAttempts"]));
    }
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
  }


  virtual ~CreateEventStreamingRequestRunOptionsRetryStrategy() = default;
};
class CreateEventStreamingRequestRunOptions : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestRunOptionsBatchWindow> batchWindow{};
  shared_ptr<CreateEventStreamingRequestRunOptionsDeadLetterQueue> deadLetterQueue{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<long> maximumTasks{};
  shared_ptr<CreateEventStreamingRequestRunOptionsRetryStrategy> retryStrategy{};

  CreateEventStreamingRequestRunOptions() {}

  explicit CreateEventStreamingRequestRunOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchWindow) {
      res["BatchWindow"] = batchWindow ? boost::any(batchWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (retryStrategy) {
      res["RetryStrategy"] = retryStrategy ? boost::any(retryStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchWindow") != m.end() && !m["BatchWindow"].empty()) {
      if (typeid(map<string, boost::any>) == m["BatchWindow"].type()) {
        CreateEventStreamingRequestRunOptionsBatchWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BatchWindow"]));
        batchWindow = make_shared<CreateEventStreamingRequestRunOptionsBatchWindow>(model1);
      }
    }
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        CreateEventStreamingRequestRunOptionsDeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<CreateEventStreamingRequestRunOptionsDeadLetterQueue>(model1);
      }
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<long>(boost::any_cast<long>(m["MaximumTasks"]));
    }
    if (m.find("RetryStrategy") != m.end() && !m["RetryStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetryStrategy"].type()) {
        CreateEventStreamingRequestRunOptionsRetryStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetryStrategy"]));
        retryStrategy = make_shared<CreateEventStreamingRequestRunOptionsRetryStrategy>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestRunOptions() = default;
};
class CreateEventStreamingRequestSinkSinkDataHubParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkDataHubParametersBody() {}

  explicit CreateEventStreamingRequestSinkSinkDataHubParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkDataHubParametersBody() = default;
};
class CreateEventStreamingRequestSinkSinkDataHubParametersProject : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkDataHubParametersProject() {}

  explicit CreateEventStreamingRequestSinkSinkDataHubParametersProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkDataHubParametersProject() = default;
};
class CreateEventStreamingRequestSinkSinkDataHubParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkDataHubParametersRoleName() {}

  explicit CreateEventStreamingRequestSinkSinkDataHubParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkDataHubParametersRoleName() = default;
};
class CreateEventStreamingRequestSinkSinkDataHubParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkDataHubParametersTopic() {}

  explicit CreateEventStreamingRequestSinkSinkDataHubParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkDataHubParametersTopic() = default;
};
class CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema() {}

  explicit CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema() = default;
};
class CreateEventStreamingRequestSinkSinkDataHubParametersTopicType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkDataHubParametersTopicType() {}

  explicit CreateEventStreamingRequestSinkSinkDataHubParametersTopicType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkDataHubParametersTopicType() = default;
};
class CreateEventStreamingRequestSinkSinkDataHubParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkDataHubParametersBody> body{};
  shared_ptr<CreateEventStreamingRequestSinkSinkDataHubParametersProject> project{};
  shared_ptr<CreateEventStreamingRequestSinkSinkDataHubParametersRoleName> roleName{};
  shared_ptr<CreateEventStreamingRequestSinkSinkDataHubParametersTopic> topic{};
  shared_ptr<CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema> topicSchema{};
  shared_ptr<CreateEventStreamingRequestSinkSinkDataHubParametersTopicType> topicType{};

  CreateEventStreamingRequestSinkSinkDataHubParameters() {}

  explicit CreateEventStreamingRequestSinkSinkDataHubParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topicSchema) {
      res["TopicSchema"] = topicSchema ? boost::any(topicSchema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topicType) {
      res["TopicType"] = topicType ? boost::any(topicType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        CreateEventStreamingRequestSinkSinkDataHubParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<CreateEventStreamingRequestSinkSinkDataHubParametersBody>(model1);
      }
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        CreateEventStreamingRequestSinkSinkDataHubParametersProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<CreateEventStreamingRequestSinkSinkDataHubParametersProject>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        CreateEventStreamingRequestSinkSinkDataHubParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<CreateEventStreamingRequestSinkSinkDataHubParametersRoleName>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        CreateEventStreamingRequestSinkSinkDataHubParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<CreateEventStreamingRequestSinkSinkDataHubParametersTopic>(model1);
      }
    }
    if (m.find("TopicSchema") != m.end() && !m["TopicSchema"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicSchema"].type()) {
        CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicSchema"]));
        topicSchema = make_shared<CreateEventStreamingRequestSinkSinkDataHubParametersTopicSchema>(model1);
      }
    }
    if (m.find("TopicType") != m.end() && !m["TopicType"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicType"].type()) {
        CreateEventStreamingRequestSinkSinkDataHubParametersTopicType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicType"]));
        topicType = make_shared<CreateEventStreamingRequestSinkSinkDataHubParametersTopicType>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkDataHubParameters() = default;
};
class CreateEventStreamingRequestSinkSinkFcParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFcParametersBody() {}

  explicit CreateEventStreamingRequestSinkSinkFcParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFcParametersBody() = default;
};
class CreateEventStreamingRequestSinkSinkFcParametersConcurrency : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFcParametersConcurrency() {}

  explicit CreateEventStreamingRequestSinkSinkFcParametersConcurrency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFcParametersConcurrency() = default;
};
class CreateEventStreamingRequestSinkSinkFcParametersFunctionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFcParametersFunctionName() {}

  explicit CreateEventStreamingRequestSinkSinkFcParametersFunctionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFcParametersFunctionName() = default;
};
class CreateEventStreamingRequestSinkSinkFcParametersInvocationType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFcParametersInvocationType() {}

  explicit CreateEventStreamingRequestSinkSinkFcParametersInvocationType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFcParametersInvocationType() = default;
};
class CreateEventStreamingRequestSinkSinkFcParametersQualifier : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFcParametersQualifier() {}

  explicit CreateEventStreamingRequestSinkSinkFcParametersQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFcParametersQualifier() = default;
};
class CreateEventStreamingRequestSinkSinkFcParametersServiceName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFcParametersServiceName() {}

  explicit CreateEventStreamingRequestSinkSinkFcParametersServiceName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFcParametersServiceName() = default;
};
class CreateEventStreamingRequestSinkSinkFcParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkFcParametersBody> body{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFcParametersConcurrency> concurrency{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFcParametersFunctionName> functionName{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFcParametersInvocationType> invocationType{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFcParametersQualifier> qualifier{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFcParametersServiceName> serviceName{};

  CreateEventStreamingRequestSinkSinkFcParameters() {}

  explicit CreateEventStreamingRequestSinkSinkFcParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (concurrency) {
      res["Concurrency"] = concurrency ? boost::any(concurrency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionName) {
      res["FunctionName"] = functionName ? boost::any(functionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invocationType) {
      res["InvocationType"] = invocationType ? boost::any(invocationType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualifier) {
      res["Qualifier"] = qualifier ? boost::any(qualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceName) {
      res["ServiceName"] = serviceName ? boost::any(serviceName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        CreateEventStreamingRequestSinkSinkFcParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<CreateEventStreamingRequestSinkSinkFcParametersBody>(model1);
      }
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      if (typeid(map<string, boost::any>) == m["Concurrency"].type()) {
        CreateEventStreamingRequestSinkSinkFcParametersConcurrency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Concurrency"]));
        concurrency = make_shared<CreateEventStreamingRequestSinkSinkFcParametersConcurrency>(model1);
      }
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionName"].type()) {
        CreateEventStreamingRequestSinkSinkFcParametersFunctionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionName"]));
        functionName = make_shared<CreateEventStreamingRequestSinkSinkFcParametersFunctionName>(model1);
      }
    }
    if (m.find("InvocationType") != m.end() && !m["InvocationType"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvocationType"].type()) {
        CreateEventStreamingRequestSinkSinkFcParametersInvocationType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvocationType"]));
        invocationType = make_shared<CreateEventStreamingRequestSinkSinkFcParametersInvocationType>(model1);
      }
    }
    if (m.find("Qualifier") != m.end() && !m["Qualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Qualifier"].type()) {
        CreateEventStreamingRequestSinkSinkFcParametersQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Qualifier"]));
        qualifier = make_shared<CreateEventStreamingRequestSinkSinkFcParametersQualifier>(model1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceName"].type()) {
        CreateEventStreamingRequestSinkSinkFcParametersServiceName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceName"]));
        serviceName = make_shared<CreateEventStreamingRequestSinkSinkFcParametersServiceName>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFcParameters() = default;
};
class CreateEventStreamingRequestSinkSinkFnfParametersExecutionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFnfParametersExecutionName() {}

  explicit CreateEventStreamingRequestSinkSinkFnfParametersExecutionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFnfParametersExecutionName() = default;
};
class CreateEventStreamingRequestSinkSinkFnfParametersFlowName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFnfParametersFlowName() {}

  explicit CreateEventStreamingRequestSinkSinkFnfParametersFlowName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFnfParametersFlowName() = default;
};
class CreateEventStreamingRequestSinkSinkFnfParametersInput : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFnfParametersInput() {}

  explicit CreateEventStreamingRequestSinkSinkFnfParametersInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFnfParametersInput() = default;
};
class CreateEventStreamingRequestSinkSinkFnfParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkFnfParametersRoleName() {}

  explicit CreateEventStreamingRequestSinkSinkFnfParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFnfParametersRoleName() = default;
};
class CreateEventStreamingRequestSinkSinkFnfParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkFnfParametersExecutionName> executionName{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFnfParametersFlowName> flowName{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFnfParametersInput> input{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFnfParametersRoleName> roleName{};

  CreateEventStreamingRequestSinkSinkFnfParameters() {}

  explicit CreateEventStreamingRequestSinkSinkFnfParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionName) {
      res["ExecutionName"] = executionName ? boost::any(executionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flowName) {
      res["FlowName"] = flowName ? boost::any(flowName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (input) {
      res["Input"] = input ? boost::any(input->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecutionName"].type()) {
        CreateEventStreamingRequestSinkSinkFnfParametersExecutionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecutionName"]));
        executionName = make_shared<CreateEventStreamingRequestSinkSinkFnfParametersExecutionName>(model1);
      }
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowName"].type()) {
        CreateEventStreamingRequestSinkSinkFnfParametersFlowName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowName"]));
        flowName = make_shared<CreateEventStreamingRequestSinkSinkFnfParametersFlowName>(model1);
      }
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(map<string, boost::any>) == m["Input"].type()) {
        CreateEventStreamingRequestSinkSinkFnfParametersInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Input"]));
        input = make_shared<CreateEventStreamingRequestSinkSinkFnfParametersInput>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        CreateEventStreamingRequestSinkSinkFnfParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<CreateEventStreamingRequestSinkSinkFnfParametersRoleName>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkFnfParameters() = default;
};
class CreateEventStreamingRequestSinkSinkKafkaParametersAcks : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkKafkaParametersAcks() {}

  explicit CreateEventStreamingRequestSinkSinkKafkaParametersAcks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkKafkaParametersAcks() = default;
};
class CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId() {}

  explicit CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId() = default;
};
class CreateEventStreamingRequestSinkSinkKafkaParametersKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkKafkaParametersKey() {}

  explicit CreateEventStreamingRequestSinkSinkKafkaParametersKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkKafkaParametersKey() = default;
};
class CreateEventStreamingRequestSinkSinkKafkaParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkKafkaParametersTopic() {}

  explicit CreateEventStreamingRequestSinkSinkKafkaParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkKafkaParametersTopic() = default;
};
class CreateEventStreamingRequestSinkSinkKafkaParametersValue : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkKafkaParametersValue() {}

  explicit CreateEventStreamingRequestSinkSinkKafkaParametersValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkKafkaParametersValue() = default;
};
class CreateEventStreamingRequestSinkSinkKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkKafkaParametersAcks> acks{};
  shared_ptr<CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId> instanceId{};
  shared_ptr<CreateEventStreamingRequestSinkSinkKafkaParametersKey> key{};
  shared_ptr<CreateEventStreamingRequestSinkSinkKafkaParametersTopic> topic{};
  shared_ptr<CreateEventStreamingRequestSinkSinkKafkaParametersValue> value{};

  CreateEventStreamingRequestSinkSinkKafkaParameters() {}

  explicit CreateEventStreamingRequestSinkSinkKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acks) {
      res["Acks"] = acks ? boost::any(acks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = key ? boost::any(key->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acks") != m.end() && !m["Acks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acks"].type()) {
        CreateEventStreamingRequestSinkSinkKafkaParametersAcks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acks"]));
        acks = make_shared<CreateEventStreamingRequestSinkSinkKafkaParametersAcks>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      if (typeid(map<string, boost::any>) == m["Key"].type()) {
        CreateEventStreamingRequestSinkSinkKafkaParametersKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Key"]));
        key = make_shared<CreateEventStreamingRequestSinkSinkKafkaParametersKey>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        CreateEventStreamingRequestSinkSinkKafkaParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<CreateEventStreamingRequestSinkSinkKafkaParametersTopic>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        CreateEventStreamingRequestSinkSinkKafkaParametersValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<CreateEventStreamingRequestSinkSinkKafkaParametersValue>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkKafkaParameters() = default;
};
class CreateEventStreamingRequestSinkSinkMNSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkMNSParametersBody() {}

  explicit CreateEventStreamingRequestSinkSinkMNSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkMNSParametersBody() = default;
};
class CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode() {}

  explicit CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode() = default;
};
class CreateEventStreamingRequestSinkSinkMNSParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkMNSParametersQueueName() {}

  explicit CreateEventStreamingRequestSinkSinkMNSParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkMNSParametersQueueName() = default;
};
class CreateEventStreamingRequestSinkSinkMNSParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkMNSParametersBody> body{};
  shared_ptr<CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode> isBase64Encode{};
  shared_ptr<CreateEventStreamingRequestSinkSinkMNSParametersQueueName> queueName{};

  CreateEventStreamingRequestSinkSinkMNSParameters() {}

  explicit CreateEventStreamingRequestSinkSinkMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isBase64Encode) {
      res["IsBase64Encode"] = isBase64Encode ? boost::any(isBase64Encode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        CreateEventStreamingRequestSinkSinkMNSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<CreateEventStreamingRequestSinkSinkMNSParametersBody>(model1);
      }
    }
    if (m.find("IsBase64Encode") != m.end() && !m["IsBase64Encode"].empty()) {
      if (typeid(map<string, boost::any>) == m["IsBase64Encode"].type()) {
        CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IsBase64Encode"]));
        isBase64Encode = make_shared<CreateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        CreateEventStreamingRequestSinkSinkMNSParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<CreateEventStreamingRequestSinkSinkMNSParametersQueueName>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkMNSParameters() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersBody() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersBody() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName() = default;
};
class CreateEventStreamingRequestSinkSinkRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersBody> body{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange> exchange{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId> instanceId{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId> messageId{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties> properties{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName> queueName{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey> routingKey{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType> targetType{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName> virtualHostName{};

  CreateEventStreamingRequestSinkSinkRabbitMQParameters() {}

  explicit CreateEventStreamingRequestSinkSinkRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exchange) {
      res["Exchange"] = exchange ? boost::any(exchange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (messageId) {
      res["MessageId"] = messageId ? boost::any(messageId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (routingKey) {
      res["RoutingKey"] = routingKey ? boost::any(routingKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = targetType ? boost::any(targetType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (virtualHostName) {
      res["VirtualHostName"] = virtualHostName ? boost::any(virtualHostName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersBody>(model1);
      }
    }
    if (m.find("Exchange") != m.end() && !m["Exchange"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exchange"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exchange"]));
        exchange = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersExchange>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId>(model1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      if (typeid(map<string, boost::any>) == m["MessageId"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MessageId"]));
        messageId = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersMessageId>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersProperties>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersQueueName>(model1);
      }
    }
    if (m.find("RoutingKey") != m.end() && !m["RoutingKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoutingKey"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoutingKey"]));
        routingKey = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetType"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetType"]));
        targetType = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersTargetType>(model1);
      }
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualHostName"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualHostName"]));
        virtualHostName = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRabbitMQParameters() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersBody() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersBody() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersKeys : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersKeys() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersKeys() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersProperties() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersProperties() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersTags : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersTags() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersTags() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersTopic() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersTopic() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId() = default;
};
class CreateEventStreamingRequestSinkSinkRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersBody> body{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint> instanceEndpoint{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId> instanceId{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword> instancePassword{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType> instanceType{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername> instanceUsername{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersKeys> keys{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork> network{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersProperties> properties{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId> securityGroupId{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersTags> tags{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersTopic> topic{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds> vSwitchIds{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId> vpcId{};

  CreateEventStreamingRequestSinkSinkRocketMQParameters() {}

  explicit CreateEventStreamingRequestSinkSinkRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceEndpoint) {
      res["InstanceEndpoint"] = instanceEndpoint ? boost::any(instanceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instancePassword) {
      res["InstancePassword"] = instancePassword ? boost::any(instancePassword->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["InstanceType"] = instanceType ? boost::any(instanceType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceUsername) {
      res["InstanceUsername"] = instanceUsername ? boost::any(instanceUsername->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = securityGroupId ? boost::any(securityGroupId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = vSwitchIds ? boost::any(vSwitchIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcId) {
      res["VpcId"] = vpcId ? boost::any(vpcId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersBody>(model1);
      }
    }
    if (m.find("InstanceEndpoint") != m.end() && !m["InstanceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceEndpoint"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceEndpoint"]));
        instanceEndpoint = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId>(model1);
      }
    }
    if (m.find("InstancePassword") != m.end() && !m["InstancePassword"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstancePassword"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstancePassword"]));
        instancePassword = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword>(model1);
      }
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceType"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceType"]));
        instanceType = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType>(model1);
      }
    }
    if (m.find("InstanceUsername") != m.end() && !m["InstanceUsername"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceUsername"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceUsername"]));
        instanceUsername = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername>(model1);
      }
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersKeys>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersProperties>(model1);
      }
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityGroupId"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityGroupId"]));
        securityGroupId = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersTags>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersTopic>(model1);
      }
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["VSwitchIds"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VSwitchIds"]));
        vSwitchIds = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds>(model1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcId"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcId"]));
        vpcId = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkRocketMQParameters() = default;
};
class CreateEventStreamingRequestSinkSinkSLSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkSLSParametersBody() {}

  explicit CreateEventStreamingRequestSinkSinkSLSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkSLSParametersBody() = default;
};
class CreateEventStreamingRequestSinkSinkSLSParametersLogStore : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkSLSParametersLogStore() {}

  explicit CreateEventStreamingRequestSinkSinkSLSParametersLogStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkSLSParametersLogStore() = default;
};
class CreateEventStreamingRequestSinkSinkSLSParametersProject : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkSLSParametersProject() {}

  explicit CreateEventStreamingRequestSinkSinkSLSParametersProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkSLSParametersProject() = default;
};
class CreateEventStreamingRequestSinkSinkSLSParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkSLSParametersRoleName() {}

  explicit CreateEventStreamingRequestSinkSinkSLSParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkSLSParametersRoleName() = default;
};
class CreateEventStreamingRequestSinkSinkSLSParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateEventStreamingRequestSinkSinkSLSParametersTopic() {}

  explicit CreateEventStreamingRequestSinkSinkSLSParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkSLSParametersTopic() = default;
};
class CreateEventStreamingRequestSinkSinkSLSParameters : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkSLSParametersBody> body{};
  shared_ptr<CreateEventStreamingRequestSinkSinkSLSParametersLogStore> logStore{};
  shared_ptr<CreateEventStreamingRequestSinkSinkSLSParametersProject> project{};
  shared_ptr<CreateEventStreamingRequestSinkSinkSLSParametersRoleName> roleName{};
  shared_ptr<CreateEventStreamingRequestSinkSinkSLSParametersTopic> topic{};

  CreateEventStreamingRequestSinkSinkSLSParameters() {}

  explicit CreateEventStreamingRequestSinkSinkSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logStore) {
      res["LogStore"] = logStore ? boost::any(logStore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        CreateEventStreamingRequestSinkSinkSLSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<CreateEventStreamingRequestSinkSinkSLSParametersBody>(model1);
      }
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogStore"].type()) {
        CreateEventStreamingRequestSinkSinkSLSParametersLogStore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogStore"]));
        logStore = make_shared<CreateEventStreamingRequestSinkSinkSLSParametersLogStore>(model1);
      }
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        CreateEventStreamingRequestSinkSinkSLSParametersProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<CreateEventStreamingRequestSinkSinkSLSParametersProject>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        CreateEventStreamingRequestSinkSinkSLSParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<CreateEventStreamingRequestSinkSinkSLSParametersRoleName>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        CreateEventStreamingRequestSinkSinkSLSParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<CreateEventStreamingRequestSinkSinkSLSParametersTopic>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSinkSinkSLSParameters() = default;
};
class CreateEventStreamingRequestSink : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSinkSinkDataHubParameters> sinkDataHubParameters{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFcParameters> sinkFcParameters{};
  shared_ptr<CreateEventStreamingRequestSinkSinkFnfParameters> sinkFnfParameters{};
  shared_ptr<CreateEventStreamingRequestSinkSinkKafkaParameters> sinkKafkaParameters{};
  shared_ptr<CreateEventStreamingRequestSinkSinkMNSParameters> sinkMNSParameters{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRabbitMQParameters> sinkRabbitMQParameters{};
  shared_ptr<CreateEventStreamingRequestSinkSinkRocketMQParameters> sinkRocketMQParameters{};
  shared_ptr<CreateEventStreamingRequestSinkSinkSLSParameters> sinkSLSParameters{};

  CreateEventStreamingRequestSink() {}

  explicit CreateEventStreamingRequestSink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sinkDataHubParameters) {
      res["SinkDataHubParameters"] = sinkDataHubParameters ? boost::any(sinkDataHubParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkFcParameters) {
      res["SinkFcParameters"] = sinkFcParameters ? boost::any(sinkFcParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkFnfParameters) {
      res["SinkFnfParameters"] = sinkFnfParameters ? boost::any(sinkFnfParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkKafkaParameters) {
      res["SinkKafkaParameters"] = sinkKafkaParameters ? boost::any(sinkKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkMNSParameters) {
      res["SinkMNSParameters"] = sinkMNSParameters ? boost::any(sinkMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRabbitMQParameters) {
      res["SinkRabbitMQParameters"] = sinkRabbitMQParameters ? boost::any(sinkRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRocketMQParameters) {
      res["SinkRocketMQParameters"] = sinkRocketMQParameters ? boost::any(sinkRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkSLSParameters) {
      res["SinkSLSParameters"] = sinkSLSParameters ? boost::any(sinkSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SinkDataHubParameters") != m.end() && !m["SinkDataHubParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkDataHubParameters"].type()) {
        CreateEventStreamingRequestSinkSinkDataHubParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkDataHubParameters"]));
        sinkDataHubParameters = make_shared<CreateEventStreamingRequestSinkSinkDataHubParameters>(model1);
      }
    }
    if (m.find("SinkFcParameters") != m.end() && !m["SinkFcParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFcParameters"].type()) {
        CreateEventStreamingRequestSinkSinkFcParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFcParameters"]));
        sinkFcParameters = make_shared<CreateEventStreamingRequestSinkSinkFcParameters>(model1);
      }
    }
    if (m.find("SinkFnfParameters") != m.end() && !m["SinkFnfParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFnfParameters"].type()) {
        CreateEventStreamingRequestSinkSinkFnfParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFnfParameters"]));
        sinkFnfParameters = make_shared<CreateEventStreamingRequestSinkSinkFnfParameters>(model1);
      }
    }
    if (m.find("SinkKafkaParameters") != m.end() && !m["SinkKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkKafkaParameters"].type()) {
        CreateEventStreamingRequestSinkSinkKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkKafkaParameters"]));
        sinkKafkaParameters = make_shared<CreateEventStreamingRequestSinkSinkKafkaParameters>(model1);
      }
    }
    if (m.find("SinkMNSParameters") != m.end() && !m["SinkMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkMNSParameters"].type()) {
        CreateEventStreamingRequestSinkSinkMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkMNSParameters"]));
        sinkMNSParameters = make_shared<CreateEventStreamingRequestSinkSinkMNSParameters>(model1);
      }
    }
    if (m.find("SinkRabbitMQParameters") != m.end() && !m["SinkRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRabbitMQParameters"].type()) {
        CreateEventStreamingRequestSinkSinkRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRabbitMQParameters"]));
        sinkRabbitMQParameters = make_shared<CreateEventStreamingRequestSinkSinkRabbitMQParameters>(model1);
      }
    }
    if (m.find("SinkRocketMQParameters") != m.end() && !m["SinkRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRocketMQParameters"].type()) {
        CreateEventStreamingRequestSinkSinkRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRocketMQParameters"]));
        sinkRocketMQParameters = make_shared<CreateEventStreamingRequestSinkSinkRocketMQParameters>(model1);
      }
    }
    if (m.find("SinkSLSParameters") != m.end() && !m["SinkSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkSLSParameters"].type()) {
        CreateEventStreamingRequestSinkSinkSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkSLSParameters"]));
        sinkSLSParameters = make_shared<CreateEventStreamingRequestSinkSinkSLSParameters>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSink() = default;
};
class CreateEventStreamingRequestSourceSourceDTSParameters : public Darabonba::Model {
public:
  shared_ptr<string> brokerUrl{};
  shared_ptr<long> initCheckPoint{};
  shared_ptr<string> password{};
  shared_ptr<string> sid{};
  shared_ptr<string> taskId{};
  shared_ptr<string> topic{};
  shared_ptr<string> username{};

  CreateEventStreamingRequestSourceSourceDTSParameters() {}

  explicit CreateEventStreamingRequestSourceSourceDTSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerUrl) {
      res["BrokerUrl"] = boost::any(*brokerUrl);
    }
    if (initCheckPoint) {
      res["InitCheckPoint"] = boost::any(*initCheckPoint);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerUrl") != m.end() && !m["BrokerUrl"].empty()) {
      brokerUrl = make_shared<string>(boost::any_cast<string>(m["BrokerUrl"]));
    }
    if (m.find("InitCheckPoint") != m.end() && !m["InitCheckPoint"].empty()) {
      initCheckPoint = make_shared<long>(boost::any_cast<long>(m["InitCheckPoint"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~CreateEventStreamingRequestSourceSourceDTSParameters() = default;
};
class CreateEventStreamingRequestSourceSourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  CreateEventStreamingRequestSourceSourceKafkaParameters() {}

  explicit CreateEventStreamingRequestSourceSourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateEventStreamingRequestSourceSourceKafkaParameters() = default;
};
class CreateEventStreamingRequestSourceSourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  CreateEventStreamingRequestSourceSourceMNSParameters() {}

  explicit CreateEventStreamingRequestSourceSourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateEventStreamingRequestSourceSourceMNSParameters() = default;
};
class CreateEventStreamingRequestSourceSourceMQTTParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  CreateEventStreamingRequestSourceSourceMQTTParameters() {}

  explicit CreateEventStreamingRequestSourceSourceMQTTParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~CreateEventStreamingRequestSourceSourceMQTTParameters() = default;
};
class CreateEventStreamingRequestSourceSourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  CreateEventStreamingRequestSourceSourceRabbitMQParameters() {}

  explicit CreateEventStreamingRequestSourceSourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~CreateEventStreamingRequestSourceSourceRabbitMQParameters() = default;
};
class CreateEventStreamingRequestSourceSourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> filterSql{};
  shared_ptr<string> filterType{};
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceEndpoint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceNetwork{};
  shared_ptr<string> instancePassword{};
  shared_ptr<string> instanceSecurityGroupId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceUsername{};
  shared_ptr<string> instanceVSwitchIds{};
  shared_ptr<string> instanceVpcId{};
  shared_ptr<string> network{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> tag{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  CreateEventStreamingRequestSourceSourceRocketMQParameters() {}

  explicit CreateEventStreamingRequestSourceSourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (filterSql) {
      res["FilterSql"] = boost::any(*filterSql);
    }
    if (filterType) {
      res["FilterType"] = boost::any(*filterType);
    }
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceEndpoint) {
      res["InstanceEndpoint"] = boost::any(*instanceEndpoint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNetwork) {
      res["InstanceNetwork"] = boost::any(*instanceNetwork);
    }
    if (instancePassword) {
      res["InstancePassword"] = boost::any(*instancePassword);
    }
    if (instanceSecurityGroupId) {
      res["InstanceSecurityGroupId"] = boost::any(*instanceSecurityGroupId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceUsername) {
      res["InstanceUsername"] = boost::any(*instanceUsername);
    }
    if (instanceVSwitchIds) {
      res["InstanceVSwitchIds"] = boost::any(*instanceVSwitchIds);
    }
    if (instanceVpcId) {
      res["InstanceVpcId"] = boost::any(*instanceVpcId);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("FilterSql") != m.end() && !m["FilterSql"].empty()) {
      filterSql = make_shared<string>(boost::any_cast<string>(m["FilterSql"]));
    }
    if (m.find("FilterType") != m.end() && !m["FilterType"].empty()) {
      filterType = make_shared<string>(boost::any_cast<string>(m["FilterType"]));
    }
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceEndpoint") != m.end() && !m["InstanceEndpoint"].empty()) {
      instanceEndpoint = make_shared<string>(boost::any_cast<string>(m["InstanceEndpoint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNetwork") != m.end() && !m["InstanceNetwork"].empty()) {
      instanceNetwork = make_shared<string>(boost::any_cast<string>(m["InstanceNetwork"]));
    }
    if (m.find("InstancePassword") != m.end() && !m["InstancePassword"].empty()) {
      instancePassword = make_shared<string>(boost::any_cast<string>(m["InstancePassword"]));
    }
    if (m.find("InstanceSecurityGroupId") != m.end() && !m["InstanceSecurityGroupId"].empty()) {
      instanceSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceSecurityGroupId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceUsername") != m.end() && !m["InstanceUsername"].empty()) {
      instanceUsername = make_shared<string>(boost::any_cast<string>(m["InstanceUsername"]));
    }
    if (m.find("InstanceVSwitchIds") != m.end() && !m["InstanceVSwitchIds"].empty()) {
      instanceVSwitchIds = make_shared<string>(boost::any_cast<string>(m["InstanceVSwitchIds"]));
    }
    if (m.find("InstanceVpcId") != m.end() && !m["InstanceVpcId"].empty()) {
      instanceVpcId = make_shared<string>(boost::any_cast<string>(m["InstanceVpcId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateEventStreamingRequestSourceSourceRocketMQParameters() = default;
};
class CreateEventStreamingRequestSourceSourceSLSParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumePosition{};
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};
  shared_ptr<string> roleName{};

  CreateEventStreamingRequestSourceSourceSLSParameters() {}

  explicit CreateEventStreamingRequestSourceSourceSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumePosition) {
      res["ConsumePosition"] = boost::any(*consumePosition);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumePosition") != m.end() && !m["ConsumePosition"].empty()) {
      consumePosition = make_shared<string>(boost::any_cast<string>(m["ConsumePosition"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateEventStreamingRequestSourceSourceSLSParameters() = default;
};
class CreateEventStreamingRequestSource : public Darabonba::Model {
public:
  shared_ptr<CreateEventStreamingRequestSourceSourceDTSParameters> sourceDTSParameters{};
  shared_ptr<CreateEventStreamingRequestSourceSourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<CreateEventStreamingRequestSourceSourceMNSParameters> sourceMNSParameters{};
  shared_ptr<CreateEventStreamingRequestSourceSourceMQTTParameters> sourceMQTTParameters{};
  shared_ptr<CreateEventStreamingRequestSourceSourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<CreateEventStreamingRequestSourceSourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<CreateEventStreamingRequestSourceSourceSLSParameters> sourceSLSParameters{};

  CreateEventStreamingRequestSource() {}

  explicit CreateEventStreamingRequestSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDTSParameters) {
      res["SourceDTSParameters"] = sourceDTSParameters ? boost::any(sourceDTSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMQTTParameters) {
      res["SourceMQTTParameters"] = sourceMQTTParameters ? boost::any(sourceMQTTParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceSLSParameters) {
      res["SourceSLSParameters"] = sourceSLSParameters ? boost::any(sourceSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceDTSParameters") != m.end() && !m["SourceDTSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceDTSParameters"].type()) {
        CreateEventStreamingRequestSourceSourceDTSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceDTSParameters"]));
        sourceDTSParameters = make_shared<CreateEventStreamingRequestSourceSourceDTSParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        CreateEventStreamingRequestSourceSourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<CreateEventStreamingRequestSourceSourceKafkaParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        CreateEventStreamingRequestSourceSourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<CreateEventStreamingRequestSourceSourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceMQTTParameters") != m.end() && !m["SourceMQTTParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMQTTParameters"].type()) {
        CreateEventStreamingRequestSourceSourceMQTTParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMQTTParameters"]));
        sourceMQTTParameters = make_shared<CreateEventStreamingRequestSourceSourceMQTTParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        CreateEventStreamingRequestSourceSourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<CreateEventStreamingRequestSourceSourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        CreateEventStreamingRequestSourceSourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<CreateEventStreamingRequestSourceSourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceSLSParameters"].type()) {
        CreateEventStreamingRequestSourceSourceSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceSLSParameters"]));
        sourceSLSParameters = make_shared<CreateEventStreamingRequestSourceSourceSLSParameters>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequestSource() = default;
};
class CreateEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<CreateEventStreamingRequestRunOptions> runOptions{};
  shared_ptr<CreateEventStreamingRequestSink> sink{};
  shared_ptr<CreateEventStreamingRequestSource> source{};

  CreateEventStreamingRequest() {}

  explicit CreateEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sink) {
      res["Sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        CreateEventStreamingRequestRunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<CreateEventStreamingRequestRunOptions>(model1);
      }
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        CreateEventStreamingRequestSink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        sink = make_shared<CreateEventStreamingRequestSink>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        CreateEventStreamingRequestSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<CreateEventStreamingRequestSource>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingRequest() = default;
};
class CreateEventStreamingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<string> runOptionsShrink{};
  shared_ptr<string> sinkShrink{};
  shared_ptr<string> sourceShrink{};

  CreateEventStreamingShrinkRequest() {}

  explicit CreateEventStreamingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (runOptionsShrink) {
      res["RunOptions"] = boost::any(*runOptionsShrink);
    }
    if (sinkShrink) {
      res["Sink"] = boost::any(*sinkShrink);
    }
    if (sourceShrink) {
      res["Source"] = boost::any(*sourceShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      runOptionsShrink = make_shared<string>(boost::any_cast<string>(m["RunOptions"]));
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      sinkShrink = make_shared<string>(boost::any_cast<string>(m["Sink"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      sourceShrink = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateEventStreamingShrinkRequest() = default;
};
class CreateEventStreamingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingARN{};

  CreateEventStreamingResponseBodyData() {}

  explicit CreateEventStreamingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingARN) {
      res["EventStreamingARN"] = boost::any(*eventStreamingARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingARN") != m.end() && !m["EventStreamingARN"].empty()) {
      eventStreamingARN = make_shared<string>(boost::any_cast<string>(m["EventStreamingARN"]));
    }
  }


  virtual ~CreateEventStreamingResponseBodyData() = default;
};
class CreateEventStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEventStreamingResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateEventStreamingResponseBody() {}

  explicit CreateEventStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateEventStreamingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateEventStreamingResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEventStreamingResponseBody() = default;
};
class CreateEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEventStreamingResponseBody> body{};

  CreateEventStreamingResponse() {}

  explicit CreateEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEventStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEventStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEventStreamingResponse() = default;
};
class CreateRuleRequestEventTargetsDeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  CreateRuleRequestEventTargetsDeadLetterQueue() {}

  explicit CreateRuleRequestEventTargetsDeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~CreateRuleRequestEventTargetsDeadLetterQueue() = default;
};
class CreateRuleRequestEventTargetsParamList : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> resourceKey{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  CreateRuleRequestEventTargetsParamList() {}

  explicit CreateRuleRequestEventTargetsParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (resourceKey) {
      res["ResourceKey"] = boost::any(*resourceKey);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("ResourceKey") != m.end() && !m["ResourceKey"].empty()) {
      resourceKey = make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateRuleRequestEventTargetsParamList() = default;
};
class CreateRuleRequestEventTargets : public Darabonba::Model {
public:
  shared_ptr<CreateRuleRequestEventTargetsDeadLetterQueue> deadLetterQueue{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<string> id{};
  shared_ptr<vector<CreateRuleRequestEventTargetsParamList>> paramList{};
  shared_ptr<string> pushRetryStrategy{};
  shared_ptr<string> type{};

  CreateRuleRequestEventTargets() {}

  explicit CreateRuleRequestEventTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for(auto item1:*paramList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        CreateRuleRequestEventTargetsDeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<CreateRuleRequestEventTargetsDeadLetterQueue>(model1);
      }
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<CreateRuleRequestEventTargetsParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestEventTargetsParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<CreateRuleRequestEventTargetsParamList>>(expect1);
      }
    }
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateRuleRequestEventTargets() = default;
};
class CreateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<vector<CreateRuleRequestEventTargets>> eventTargets{};
  shared_ptr<string> filterPattern{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventTargets) {
      vector<boost::any> temp1;
      for(auto item1:*eventTargets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventTargets"] = boost::any(temp1);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventTargets") != m.end() && !m["EventTargets"].empty()) {
      if (typeid(vector<boost::any>) == m["EventTargets"].type()) {
        vector<CreateRuleRequestEventTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventTargets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRuleRequestEventTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventTargets = make_shared<vector<CreateRuleRequestEventTargets>>(expect1);
      }
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateRuleRequest() = default;
};
class CreateRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventTargetsShrink{};
  shared_ptr<string> filterPattern{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};

  CreateRuleShrinkRequest() {}

  explicit CreateRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventTargetsShrink) {
      res["EventTargets"] = boost::any(*eventTargetsShrink);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventTargets") != m.end() && !m["EventTargets"].empty()) {
      eventTargetsShrink = make_shared<string>(boost::any_cast<string>(m["EventTargets"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateRuleShrinkRequest() = default;
};
class CreateRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ruleARN{};

  CreateRuleResponseBodyData() {}

  explicit CreateRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleARN) {
      res["RuleARN"] = boost::any(*ruleARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
  }


  virtual ~CreateRuleResponseBodyData() = default;
};
class CreateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateRuleResponseBody() {}

  explicit CreateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRuleResponseBody() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRuleResponseBody> body{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleResponse() = default;
};
class CreateServiceLinkedRoleForProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> productName{};

  CreateServiceLinkedRoleForProductRequest() {}

  explicit CreateServiceLinkedRoleForProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~CreateServiceLinkedRoleForProductRequest() = default;
};
class CreateServiceLinkedRoleForProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateServiceLinkedRoleForProductResponseBody() {}

  explicit CreateServiceLinkedRoleForProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateServiceLinkedRoleForProductResponseBody() = default;
};
class CreateServiceLinkedRoleForProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceLinkedRoleForProductResponseBody> body{};

  CreateServiceLinkedRoleForProductResponse() {}

  explicit CreateServiceLinkedRoleForProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceLinkedRoleForProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleForProductResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleForProductResponse() = default;
};
class DeleteApiDestinationRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};

  DeleteApiDestinationRequest() {}

  explicit DeleteApiDestinationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
  }


  virtual ~DeleteApiDestinationRequest() = default;
};
class DeleteApiDestinationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteApiDestinationResponseBody() {}

  explicit DeleteApiDestinationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteApiDestinationResponseBody() = default;
};
class DeleteApiDestinationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApiDestinationResponseBody> body{};

  DeleteApiDestinationResponse() {}

  explicit DeleteApiDestinationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteApiDestinationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApiDestinationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApiDestinationResponse() = default;
};
class DeleteConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionName{};

  DeleteConnectionRequest() {}

  explicit DeleteConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
  }


  virtual ~DeleteConnectionRequest() = default;
};
class DeleteConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteConnectionResponseBody() {}

  explicit DeleteConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteConnectionResponseBody() = default;
};
class DeleteConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConnectionResponseBody> body{};

  DeleteConnectionResponse() {}

  explicit DeleteConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConnectionResponse() = default;
};
class DeleteEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};

  DeleteEventBusRequest() {}

  explicit DeleteEventBusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }


  virtual ~DeleteEventBusRequest() = default;
};
class DeleteEventBusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEventBusResponseBody() {}

  explicit DeleteEventBusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEventBusResponseBody() = default;
};
class DeleteEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventBusResponseBody> body{};

  DeleteEventBusResponse() {}

  explicit DeleteEventBusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEventBusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventBusResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventBusResponse() = default;
};
class DeleteEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventSourceName{};

  DeleteEventSourceRequest() {}

  explicit DeleteEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
  }


  virtual ~DeleteEventSourceRequest() = default;
};
class DeleteEventSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEventSourceResponseBody() {}

  explicit DeleteEventSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEventSourceResponseBody() = default;
};
class DeleteEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventSourceResponseBody> body{};

  DeleteEventSourceResponse() {}

  explicit DeleteEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEventSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventSourceResponse() = default;
};
class DeleteEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  DeleteEventStreamingRequest() {}

  explicit DeleteEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~DeleteEventStreamingRequest() = default;
};
class DeleteEventStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEventStreamingResponseBody() {}

  explicit DeleteEventStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<bool>(boost::any_cast<bool>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEventStreamingResponseBody() = default;
};
class DeleteEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventStreamingResponseBody> body{};

  DeleteEventStreamingResponse() {}

  explicit DeleteEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEventStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventStreamingResponse() = default;
};
class DeleteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  DeleteRuleRequest() {}

  explicit DeleteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DeleteRuleRequest() = default;
};
class DeleteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteRuleResponseBody() {}

  explicit DeleteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteRuleResponseBody() = default;
};
class DeleteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRuleResponseBody> body{};

  DeleteRuleResponse() {}

  explicit DeleteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRuleResponse() = default;
};
class DeleteTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<vector<string>> targetIds{};

  DeleteTargetsRequest() {}

  explicit DeleteTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (targetIds) {
      res["TargetIds"] = boost::any(*targetIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("TargetIds") != m.end() && !m["TargetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TargetIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TargetIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteTargetsRequest() = default;
};
class DeleteTargetsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> targetIdsShrink{};

  DeleteTargetsShrinkRequest() {}

  explicit DeleteTargetsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (targetIdsShrink) {
      res["TargetIds"] = boost::any(*targetIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("TargetIds") != m.end() && !m["TargetIds"].empty()) {
      targetIdsShrink = make_shared<string>(boost::any_cast<string>(m["TargetIds"]));
    }
  }


  virtual ~DeleteTargetsShrinkRequest() = default;
};
class DeleteTargetsResponseBodyDataErrorEntries : public Darabonba::Model {
public:
  shared_ptr<string> entryId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  DeleteTargetsResponseBodyDataErrorEntries() {}

  explicit DeleteTargetsResponseBodyDataErrorEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entryId) {
      res["EntryId"] = boost::any(*entryId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntryId") != m.end() && !m["EntryId"].empty()) {
      entryId = make_shared<string>(boost::any_cast<string>(m["EntryId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~DeleteTargetsResponseBodyDataErrorEntries() = default;
};
class DeleteTargetsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteTargetsResponseBodyDataErrorEntries>> errorEntries{};
  shared_ptr<long> errorEntriesCount{};

  DeleteTargetsResponseBodyData() {}

  explicit DeleteTargetsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorEntries) {
      vector<boost::any> temp1;
      for(auto item1:*errorEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorEntries"] = boost::any(temp1);
    }
    if (errorEntriesCount) {
      res["ErrorEntriesCount"] = boost::any(*errorEntriesCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorEntries") != m.end() && !m["ErrorEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorEntries"].type()) {
        vector<DeleteTargetsResponseBodyDataErrorEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteTargetsResponseBodyDataErrorEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorEntries = make_shared<vector<DeleteTargetsResponseBodyDataErrorEntries>>(expect1);
      }
    }
    if (m.find("ErrorEntriesCount") != m.end() && !m["ErrorEntriesCount"].empty()) {
      errorEntriesCount = make_shared<long>(boost::any_cast<long>(m["ErrorEntriesCount"]));
    }
  }


  virtual ~DeleteTargetsResponseBodyData() = default;
};
class DeleteTargetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteTargetsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteTargetsResponseBody() {}

  explicit DeleteTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteTargetsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteTargetsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteTargetsResponseBody() = default;
};
class DeleteTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTargetsResponseBody> body{};

  DeleteTargetsResponse() {}

  explicit DeleteTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTargetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTargetsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTargetsResponse() = default;
};
class DisableRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  DisableRuleRequest() {}

  explicit DisableRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DisableRuleRequest() = default;
};
class DisableRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableRuleResponseBody() {}

  explicit DisableRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableRuleResponseBody() = default;
};
class DisableRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableRuleResponseBody> body{};

  DisableRuleResponse() {}

  explicit DisableRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DisableRuleResponse() = default;
};
class EnableRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  EnableRuleRequest() {}

  explicit EnableRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~EnableRuleRequest() = default;
};
class EnableRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableRuleResponseBody() {}

  explicit EnableRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableRuleResponseBody() = default;
};
class EnableRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableRuleResponseBody> body{};

  EnableRuleResponse() {}

  explicit EnableRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableRuleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableRuleResponse() = default;
};
class GetApiDestinationRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};

  GetApiDestinationRequest() {}

  explicit GetApiDestinationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
  }


  virtual ~GetApiDestinationRequest() = default;
};
class GetApiDestinationResponseBodyDataHttpApiParameters : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> method{};

  GetApiDestinationResponseBodyDataHttpApiParameters() {}

  explicit GetApiDestinationResponseBodyDataHttpApiParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
  }


  virtual ~GetApiDestinationResponseBodyDataHttpApiParameters() = default;
};
class GetApiDestinationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<GetApiDestinationResponseBodyDataHttpApiParameters> httpApiParameters{};

  GetApiDestinationResponseBodyData() {}

  explicit GetApiDestinationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (httpApiParameters) {
      res["HttpApiParameters"] = httpApiParameters ? boost::any(httpApiParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("HttpApiParameters") != m.end() && !m["HttpApiParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpApiParameters"].type()) {
        GetApiDestinationResponseBodyDataHttpApiParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpApiParameters"]));
        httpApiParameters = make_shared<GetApiDestinationResponseBodyDataHttpApiParameters>(model1);
      }
    }
  }


  virtual ~GetApiDestinationResponseBodyData() = default;
};
class GetApiDestinationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetApiDestinationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetApiDestinationResponseBody() {}

  explicit GetApiDestinationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetApiDestinationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetApiDestinationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApiDestinationResponseBody() = default;
};
class GetApiDestinationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApiDestinationResponseBody> body{};

  GetApiDestinationResponse() {}

  explicit GetApiDestinationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetApiDestinationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApiDestinationResponseBody>(model1);
      }
    }
  }


  virtual ~GetApiDestinationResponse() = default;
};
class GetConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionName{};

  GetConnectionRequest() {}

  explicit GetConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
  }


  virtual ~GetConnectionRequest() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> apiKeyName{};
  shared_ptr<string> apiKeyValue{};

  GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyName) {
      res["ApiKeyName"] = boost::any(*apiKeyName);
    }
    if (apiKeyValue) {
      res["ApiKeyValue"] = boost::any(*apiKeyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyName") != m.end() && !m["ApiKeyName"].empty()) {
      apiKeyName = make_shared<string>(boost::any_cast<string>(m["ApiKeyName"]));
    }
    if (m.find("ApiKeyValue") != m.end() && !m["ApiKeyValue"].empty()) {
      apiKeyValue = make_shared<string>(boost::any_cast<string>(m["ApiKeyValue"]));
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters : public Darabonba::Model {
public:
  shared_ptr<string> clientID{};
  shared_ptr<string> clientSecret{};

  GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientID) {
      res["ClientID"] = boost::any(*clientID);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientID") != m.end() && !m["ClientID"].empty()) {
      clientID = make_shared<string>(boost::any_cast<string>(m["ClientID"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
public:
  shared_ptr<vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters{};
  shared_ptr<vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters{};
  shared_ptr<vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters{};

  GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyParameters) {
      vector<boost::any> temp1;
      for(auto item1:*bodyParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyParameters"] = boost::any(temp1);
    }
    if (headerParameters) {
      vector<boost::any> temp1;
      for(auto item1:*headerParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HeaderParameters"] = boost::any(temp1);
    }
    if (queryStringParameters) {
      vector<boost::any> temp1;
      for(auto item1:*queryStringParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueryStringParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyParameters") != m.end() && !m["BodyParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyParameters"].type()) {
        vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyParameters = make_shared<vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>>(expect1);
      }
    }
    if (m.find("HeaderParameters") != m.end() && !m["HeaderParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HeaderParameters"].type()) {
        vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HeaderParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerParameters = make_shared<vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>>(expect1);
      }
    }
    if (m.find("QueryStringParameters") != m.end() && !m["QueryStringParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["QueryStringParameters"].type()) {
        vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueryStringParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryStringParameters = make_shared<vector<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>>(expect1);
      }
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> authorizationEndpoint{};
  shared_ptr<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters> clientParameters{};
  shared_ptr<string> httpMethod{};
  shared_ptr<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters{};

  GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationEndpoint) {
      res["AuthorizationEndpoint"] = boost::any(*authorizationEndpoint);
    }
    if (clientParameters) {
      res["ClientParameters"] = clientParameters ? boost::any(clientParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (OAuthHttpParameters) {
      res["OAuthHttpParameters"] = OAuthHttpParameters ? boost::any(OAuthHttpParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationEndpoint") != m.end() && !m["AuthorizationEndpoint"].empty()) {
      authorizationEndpoint = make_shared<string>(boost::any_cast<string>(m["AuthorizationEndpoint"]));
    }
    if (m.find("ClientParameters") != m.end() && !m["ClientParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientParameters"].type()) {
        GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientParameters"]));
        clientParameters = make_shared<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters>(model1);
      }
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("OAuthHttpParameters") != m.end() && !m["OAuthHttpParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthHttpParameters"].type()) {
        GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthHttpParameters"]));
        OAuthHttpParameters = make_shared<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters>(model1);
      }
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsAuthParameters : public Darabonba::Model {
public:
  shared_ptr<GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters> apiKeyAuthParameters{};
  shared_ptr<string> authorizationType{};
  shared_ptr<GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters> basicAuthParameters{};
  shared_ptr<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters> OAuthParameters{};

  GetConnectionResponseBodyDataConnectionsAuthParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyAuthParameters) {
      res["ApiKeyAuthParameters"] = apiKeyAuthParameters ? boost::any(apiKeyAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authorizationType) {
      res["AuthorizationType"] = boost::any(*authorizationType);
    }
    if (basicAuthParameters) {
      res["BasicAuthParameters"] = basicAuthParameters ? boost::any(basicAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OAuthParameters) {
      res["OAuthParameters"] = OAuthParameters ? boost::any(OAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyAuthParameters") != m.end() && !m["ApiKeyAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiKeyAuthParameters"].type()) {
        GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiKeyAuthParameters"]));
        apiKeyAuthParameters = make_shared<GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters>(model1);
      }
    }
    if (m.find("AuthorizationType") != m.end() && !m["AuthorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["AuthorizationType"]));
    }
    if (m.find("BasicAuthParameters") != m.end() && !m["BasicAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["BasicAuthParameters"].type()) {
        GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BasicAuthParameters"]));
        basicAuthParameters = make_shared<GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters>(model1);
      }
    }
    if (m.find("OAuthParameters") != m.end() && !m["OAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthParameters"].type()) {
        GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthParameters"]));
        OAuthParameters = make_shared<GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters>(model1);
      }
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsAuthParameters() = default;
};
class GetConnectionResponseBodyDataConnectionsNetworkParameters : public Darabonba::Model {
public:
  shared_ptr<string> networkType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitcheId{};

  GetConnectionResponseBodyDataConnectionsNetworkParameters() {}

  explicit GetConnectionResponseBodyDataConnectionsNetworkParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitcheId) {
      res["VswitcheId"] = boost::any(*vswitcheId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitcheId") != m.end() && !m["VswitcheId"].empty()) {
      vswitcheId = make_shared<string>(boost::any_cast<string>(m["VswitcheId"]));
    }
  }


  virtual ~GetConnectionResponseBodyDataConnectionsNetworkParameters() = default;
};
class GetConnectionResponseBodyDataConnections : public Darabonba::Model {
public:
  shared_ptr<GetConnectionResponseBodyDataConnectionsAuthParameters> authParameters{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<GetConnectionResponseBodyDataConnectionsNetworkParameters> networkParameters{};

  GetConnectionResponseBodyDataConnections() {}

  explicit GetConnectionResponseBodyDataConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authParameters) {
      res["AuthParameters"] = authParameters ? boost::any(authParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (networkParameters) {
      res["NetworkParameters"] = networkParameters ? boost::any(networkParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthParameters") != m.end() && !m["AuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthParameters"].type()) {
        GetConnectionResponseBodyDataConnectionsAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthParameters"]));
        authParameters = make_shared<GetConnectionResponseBodyDataConnectionsAuthParameters>(model1);
      }
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("NetworkParameters") != m.end() && !m["NetworkParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkParameters"].type()) {
        GetConnectionResponseBodyDataConnectionsNetworkParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkParameters"]));
        networkParameters = make_shared<GetConnectionResponseBodyDataConnectionsNetworkParameters>(model1);
      }
    }
  }


  virtual ~GetConnectionResponseBodyDataConnections() = default;
};
class GetConnectionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetConnectionResponseBodyDataConnections>> connections{};

  GetConnectionResponseBodyData() {}

  explicit GetConnectionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      vector<boost::any> temp1;
      for(auto item1:*connections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Connections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      if (typeid(vector<boost::any>) == m["Connections"].type()) {
        vector<GetConnectionResponseBodyDataConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Connections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConnectionResponseBodyDataConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connections = make_shared<vector<GetConnectionResponseBodyDataConnections>>(expect1);
      }
    }
  }


  virtual ~GetConnectionResponseBodyData() = default;
};
class GetConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetConnectionResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetConnectionResponseBody() {}

  explicit GetConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetConnectionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetConnectionResponseBodyData>(model1);
      }
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetConnectionResponseBody() = default;
};
class GetConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConnectionResponseBody> body{};

  GetConnectionResponse() {}

  explicit GetConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionResponse() = default;
};
class GetEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};

  GetEventBusRequest() {}

  explicit GetEventBusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }


  virtual ~GetEventBusRequest() = default;
};
class GetEventBusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<string> eventBusARN{};
  shared_ptr<string> eventBusName{};

  GetEventBusResponseBodyData() {}

  explicit GetEventBusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusARN) {
      res["EventBusARN"] = boost::any(*eventBusARN);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN = make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }


  virtual ~GetEventBusResponseBodyData() = default;
};
class GetEventBusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEventBusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEventBusResponseBody() {}

  explicit GetEventBusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetEventBusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEventBusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetEventBusResponseBody() = default;
};
class GetEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEventBusResponseBody> body{};

  GetEventBusResponse() {}

  explicit GetEventBusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEventBusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEventBusResponseBody>(model1);
      }
    }
  }


  virtual ~GetEventBusResponse() = default;
};
class GetEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  GetEventStreamingRequest() {}

  explicit GetEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~GetEventStreamingRequest() = default;
};
class GetEventStreamingResponseBodyDataRunOptionsBatchWindow : public Darabonba::Model {
public:
  shared_ptr<long> countBasedWindow{};
  shared_ptr<long> timeBasedWindow{};

  GetEventStreamingResponseBodyDataRunOptionsBatchWindow() {}

  explicit GetEventStreamingResponseBodyDataRunOptionsBatchWindow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countBasedWindow) {
      res["CountBasedWindow"] = boost::any(*countBasedWindow);
    }
    if (timeBasedWindow) {
      res["TimeBasedWindow"] = boost::any(*timeBasedWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountBasedWindow") != m.end() && !m["CountBasedWindow"].empty()) {
      countBasedWindow = make_shared<long>(boost::any_cast<long>(m["CountBasedWindow"]));
    }
    if (m.find("TimeBasedWindow") != m.end() && !m["TimeBasedWindow"].empty()) {
      timeBasedWindow = make_shared<long>(boost::any_cast<long>(m["TimeBasedWindow"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataRunOptionsBatchWindow() = default;
};
class GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue() {}

  explicit GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue() = default;
};
class GetEventStreamingResponseBodyDataRunOptionsRetryStrategy : public Darabonba::Model {
public:
  shared_ptr<double> maximumEventAgeInSeconds{};
  shared_ptr<double> maximumRetryAttempts{};
  shared_ptr<string> pushRetryStrategy{};

  GetEventStreamingResponseBodyDataRunOptionsRetryStrategy() {}

  explicit GetEventStreamingResponseBodyDataRunOptionsRetryStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumEventAgeInSeconds) {
      res["MaximumEventAgeInSeconds"] = boost::any(*maximumEventAgeInSeconds);
    }
    if (maximumRetryAttempts) {
      res["MaximumRetryAttempts"] = boost::any(*maximumRetryAttempts);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaximumEventAgeInSeconds") != m.end() && !m["MaximumEventAgeInSeconds"].empty()) {
      maximumEventAgeInSeconds = make_shared<double>(boost::any_cast<double>(m["MaximumEventAgeInSeconds"]));
    }
    if (m.find("MaximumRetryAttempts") != m.end() && !m["MaximumRetryAttempts"].empty()) {
      maximumRetryAttempts = make_shared<double>(boost::any_cast<double>(m["MaximumRetryAttempts"]));
    }
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataRunOptionsRetryStrategy() = default;
};
class GetEventStreamingResponseBodyDataRunOptions : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataRunOptionsBatchWindow> batchWindow{};
  shared_ptr<GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue> deadLetterQueue{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<long> maximumTasks{};
  shared_ptr<GetEventStreamingResponseBodyDataRunOptionsRetryStrategy> retryStrategy{};

  GetEventStreamingResponseBodyDataRunOptions() {}

  explicit GetEventStreamingResponseBodyDataRunOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchWindow) {
      res["BatchWindow"] = batchWindow ? boost::any(batchWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (retryStrategy) {
      res["RetryStrategy"] = retryStrategy ? boost::any(retryStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchWindow") != m.end() && !m["BatchWindow"].empty()) {
      if (typeid(map<string, boost::any>) == m["BatchWindow"].type()) {
        GetEventStreamingResponseBodyDataRunOptionsBatchWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BatchWindow"]));
        batchWindow = make_shared<GetEventStreamingResponseBodyDataRunOptionsBatchWindow>(model1);
      }
    }
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue>(model1);
      }
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<long>(boost::any_cast<long>(m["MaximumTasks"]));
    }
    if (m.find("RetryStrategy") != m.end() && !m["RetryStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetryStrategy"].type()) {
        GetEventStreamingResponseBodyDataRunOptionsRetryStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetryStrategy"]));
        retryStrategy = make_shared<GetEventStreamingResponseBodyDataRunOptionsRetryStrategy>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataRunOptions() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFcParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFcParametersBody() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFcParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParametersBody() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFcParameters : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFcParametersBody> body{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency> concurrency{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName> functionName{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType> invocationType{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier> qualifier{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName> serviceName{};

  GetEventStreamingResponseBodyDataSinkSinkFcParameters() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFcParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (concurrency) {
      res["Concurrency"] = concurrency ? boost::any(concurrency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionName) {
      res["FunctionName"] = functionName ? boost::any(functionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invocationType) {
      res["InvocationType"] = invocationType ? boost::any(invocationType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualifier) {
      res["Qualifier"] = qualifier ? boost::any(qualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceName) {
      res["ServiceName"] = serviceName ? boost::any(serviceName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFcParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<GetEventStreamingResponseBodyDataSinkSinkFcParametersBody>(model1);
      }
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      if (typeid(map<string, boost::any>) == m["Concurrency"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Concurrency"]));
        concurrency = make_shared<GetEventStreamingResponseBodyDataSinkSinkFcParametersConcurrency>(model1);
      }
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionName"]));
        functionName = make_shared<GetEventStreamingResponseBodyDataSinkSinkFcParametersFunctionName>(model1);
      }
    }
    if (m.find("InvocationType") != m.end() && !m["InvocationType"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvocationType"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvocationType"]));
        invocationType = make_shared<GetEventStreamingResponseBodyDataSinkSinkFcParametersInvocationType>(model1);
      }
    }
    if (m.find("Qualifier") != m.end() && !m["Qualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Qualifier"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Qualifier"]));
        qualifier = make_shared<GetEventStreamingResponseBodyDataSinkSinkFcParametersQualifier>(model1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceName"]));
        serviceName = make_shared<GetEventStreamingResponseBodyDataSinkSinkFcParametersServiceName>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFcParameters() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkFnfParameters : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName> executionName{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName> flowName{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput> input{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName> roleName{};

  GetEventStreamingResponseBodyDataSinkSinkFnfParameters() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkFnfParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionName) {
      res["ExecutionName"] = executionName ? boost::any(executionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flowName) {
      res["FlowName"] = flowName ? boost::any(flowName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (input) {
      res["Input"] = input ? boost::any(input->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecutionName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecutionName"]));
        executionName = make_shared<GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName>(model1);
      }
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowName"]));
        flowName = make_shared<GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName>(model1);
      }
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(map<string, boost::any>) == m["Input"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Input"]));
        input = make_shared<GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkFnfParameters() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks> acks{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId> instanceId{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey> key{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic> topic{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue> value{};

  GetEventStreamingResponseBodyDataSinkSinkKafkaParameters() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acks) {
      res["Acks"] = acks ? boost::any(acks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = key ? boost::any(key->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acks") != m.end() && !m["Acks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acks"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acks"]));
        acks = make_shared<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      if (typeid(map<string, boost::any>) == m["Key"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Key"]));
        key = make_shared<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkKafkaParameters() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkMNSParameters : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody> body{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode> isBase64Encode{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName> queueName{};

  GetEventStreamingResponseBodyDataSinkSinkMNSParameters() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isBase64Encode) {
      res["IsBase64Encode"] = isBase64Encode ? boost::any(isBase64Encode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<GetEventStreamingResponseBodyDataSinkSinkMNSParametersBody>(model1);
      }
    }
    if (m.find("IsBase64Encode") != m.end() && !m["IsBase64Encode"].empty()) {
      if (typeid(map<string, boost::any>) == m["IsBase64Encode"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IsBase64Encode"]));
        isBase64Encode = make_shared<GetEventStreamingResponseBodyDataSinkSinkMNSParametersIsBase64Encode>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<GetEventStreamingResponseBodyDataSinkSinkMNSParametersQueueName>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkMNSParameters() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody> body{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange> exchange{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId> instanceId{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId> messageId{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties> properties{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName> queueName{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey> routingKey{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType> targetType{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName> virtualHostName{};

  GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exchange) {
      res["Exchange"] = exchange ? boost::any(exchange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (messageId) {
      res["MessageId"] = messageId ? boost::any(messageId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (routingKey) {
      res["RoutingKey"] = routingKey ? boost::any(routingKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = targetType ? boost::any(targetType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (virtualHostName) {
      res["VirtualHostName"] = virtualHostName ? boost::any(virtualHostName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersBody>(model1);
      }
    }
    if (m.find("Exchange") != m.end() && !m["Exchange"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exchange"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exchange"]));
        exchange = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersExchange>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersInstanceId>(model1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      if (typeid(map<string, boost::any>) == m["MessageId"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MessageId"]));
        messageId = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersMessageId>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersProperties>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersQueueName>(model1);
      }
    }
    if (m.find("RoutingKey") != m.end() && !m["RoutingKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoutingKey"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoutingKey"]));
        routingKey = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersRoutingKey>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetType"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetType"]));
        targetType = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersTargetType>(model1);
      }
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualHostName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualHostName"]));
        virtualHostName = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParametersVirtualHostName>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody> body{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId> instanceId{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys> keys{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties> properties{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags> tags{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic> topic{};

  GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId>(model1);
      }
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic() = default;
};
class GetEventStreamingResponseBodyDataSinkSinkSLSParameters : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody> body{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore> logStore{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject> project{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName> roleName{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic> topic{};

  GetEventStreamingResponseBodyDataSinkSinkSLSParameters() {}

  explicit GetEventStreamingResponseBodyDataSinkSinkSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logStore) {
      res["LogStore"] = logStore ? boost::any(logStore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<GetEventStreamingResponseBodyDataSinkSinkSLSParametersBody>(model1);
      }
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogStore"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogStore"]));
        logStore = make_shared<GetEventStreamingResponseBodyDataSinkSinkSLSParametersLogStore>(model1);
      }
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<GetEventStreamingResponseBodyDataSinkSinkSLSParametersProject>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<GetEventStreamingResponseBodyDataSinkSinkSLSParametersRoleName>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<GetEventStreamingResponseBodyDataSinkSinkSLSParametersTopic>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSinkSinkSLSParameters() = default;
};
class GetEventStreamingResponseBodyDataSink : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFcParameters> sinkFcParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkFnfParameters> sinkFnfParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkKafkaParameters> sinkKafkaParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkMNSParameters> sinkMNSParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters> sinkRabbitMQParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters> sinkRocketMQParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSinkSinkSLSParameters> sinkSLSParameters{};

  GetEventStreamingResponseBodyDataSink() {}

  explicit GetEventStreamingResponseBodyDataSink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sinkFcParameters) {
      res["SinkFcParameters"] = sinkFcParameters ? boost::any(sinkFcParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkFnfParameters) {
      res["SinkFnfParameters"] = sinkFnfParameters ? boost::any(sinkFnfParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkKafkaParameters) {
      res["SinkKafkaParameters"] = sinkKafkaParameters ? boost::any(sinkKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkMNSParameters) {
      res["SinkMNSParameters"] = sinkMNSParameters ? boost::any(sinkMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRabbitMQParameters) {
      res["SinkRabbitMQParameters"] = sinkRabbitMQParameters ? boost::any(sinkRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRocketMQParameters) {
      res["SinkRocketMQParameters"] = sinkRocketMQParameters ? boost::any(sinkRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkSLSParameters) {
      res["SinkSLSParameters"] = sinkSLSParameters ? boost::any(sinkSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SinkFcParameters") != m.end() && !m["SinkFcParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFcParameters"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFcParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFcParameters"]));
        sinkFcParameters = make_shared<GetEventStreamingResponseBodyDataSinkSinkFcParameters>(model1);
      }
    }
    if (m.find("SinkFnfParameters") != m.end() && !m["SinkFnfParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFnfParameters"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkFnfParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFnfParameters"]));
        sinkFnfParameters = make_shared<GetEventStreamingResponseBodyDataSinkSinkFnfParameters>(model1);
      }
    }
    if (m.find("SinkKafkaParameters") != m.end() && !m["SinkKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkKafkaParameters"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkKafkaParameters"]));
        sinkKafkaParameters = make_shared<GetEventStreamingResponseBodyDataSinkSinkKafkaParameters>(model1);
      }
    }
    if (m.find("SinkMNSParameters") != m.end() && !m["SinkMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkMNSParameters"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkMNSParameters"]));
        sinkMNSParameters = make_shared<GetEventStreamingResponseBodyDataSinkSinkMNSParameters>(model1);
      }
    }
    if (m.find("SinkRabbitMQParameters") != m.end() && !m["SinkRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRabbitMQParameters"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRabbitMQParameters"]));
        sinkRabbitMQParameters = make_shared<GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters>(model1);
      }
    }
    if (m.find("SinkRocketMQParameters") != m.end() && !m["SinkRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRocketMQParameters"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRocketMQParameters"]));
        sinkRocketMQParameters = make_shared<GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters>(model1);
      }
    }
    if (m.find("SinkSLSParameters") != m.end() && !m["SinkSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkSLSParameters"].type()) {
        GetEventStreamingResponseBodyDataSinkSinkSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkSLSParameters"]));
        sinkSLSParameters = make_shared<GetEventStreamingResponseBodyDataSinkSinkSLSParameters>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSink() = default;
};
class GetEventStreamingResponseBodyDataSourceSourceDTSParameters : public Darabonba::Model {
public:
  shared_ptr<string> brokerUrl{};
  shared_ptr<string> initCheckPoint{};
  shared_ptr<string> password{};
  shared_ptr<string> sid{};
  shared_ptr<string> taskId{};
  shared_ptr<string> topic{};
  shared_ptr<string> username{};

  GetEventStreamingResponseBodyDataSourceSourceDTSParameters() {}

  explicit GetEventStreamingResponseBodyDataSourceSourceDTSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerUrl) {
      res["BrokerUrl"] = boost::any(*brokerUrl);
    }
    if (initCheckPoint) {
      res["InitCheckPoint"] = boost::any(*initCheckPoint);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerUrl") != m.end() && !m["BrokerUrl"].empty()) {
      brokerUrl = make_shared<string>(boost::any_cast<string>(m["BrokerUrl"]));
    }
    if (m.find("InitCheckPoint") != m.end() && !m["InitCheckPoint"].empty()) {
      initCheckPoint = make_shared<string>(boost::any_cast<string>(m["InitCheckPoint"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSourceSourceDTSParameters() = default;
};
class GetEventStreamingResponseBodyDataSourceSourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  GetEventStreamingResponseBodyDataSourceSourceKafkaParameters() {}

  explicit GetEventStreamingResponseBodyDataSourceSourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSourceSourceKafkaParameters() = default;
};
class GetEventStreamingResponseBodyDataSourceSourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  GetEventStreamingResponseBodyDataSourceSourceMNSParameters() {}

  explicit GetEventStreamingResponseBodyDataSourceSourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSourceSourceMNSParameters() = default;
};
class GetEventStreamingResponseBodyDataSourceSourceMQTTParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  GetEventStreamingResponseBodyDataSourceSourceMQTTParameters() {}

  explicit GetEventStreamingResponseBodyDataSourceSourceMQTTParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSourceSourceMQTTParameters() = default;
};
class GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters() {}

  explicit GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters() = default;
};
class GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tag{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> topic{};

  GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters() {}

  explicit GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters() = default;
};
class GetEventStreamingResponseBodyDataSourceSourceSLSParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumePosition{};
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};
  shared_ptr<string> roleName{};

  GetEventStreamingResponseBodyDataSourceSourceSLSParameters() {}

  explicit GetEventStreamingResponseBodyDataSourceSourceSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumePosition) {
      res["ConsumePosition"] = boost::any(*consumePosition);
    }
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumePosition") != m.end() && !m["ConsumePosition"].empty()) {
      consumePosition = make_shared<string>(boost::any_cast<string>(m["ConsumePosition"]));
    }
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSourceSourceSLSParameters() = default;
};
class GetEventStreamingResponseBodyDataSource : public Darabonba::Model {
public:
  shared_ptr<GetEventStreamingResponseBodyDataSourceSourceDTSParameters> sourceDTSParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSourceSourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSourceSourceMNSParameters> sourceMNSParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSourceSourceMQTTParameters> sourceMQTTParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<GetEventStreamingResponseBodyDataSourceSourceSLSParameters> sourceSLSParameters{};

  GetEventStreamingResponseBodyDataSource() {}

  explicit GetEventStreamingResponseBodyDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDTSParameters) {
      res["SourceDTSParameters"] = sourceDTSParameters ? boost::any(sourceDTSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMQTTParameters) {
      res["SourceMQTTParameters"] = sourceMQTTParameters ? boost::any(sourceMQTTParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceSLSParameters) {
      res["SourceSLSParameters"] = sourceSLSParameters ? boost::any(sourceSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceDTSParameters") != m.end() && !m["SourceDTSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceDTSParameters"].type()) {
        GetEventStreamingResponseBodyDataSourceSourceDTSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceDTSParameters"]));
        sourceDTSParameters = make_shared<GetEventStreamingResponseBodyDataSourceSourceDTSParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        GetEventStreamingResponseBodyDataSourceSourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<GetEventStreamingResponseBodyDataSourceSourceKafkaParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        GetEventStreamingResponseBodyDataSourceSourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<GetEventStreamingResponseBodyDataSourceSourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceMQTTParameters") != m.end() && !m["SourceMQTTParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMQTTParameters"].type()) {
        GetEventStreamingResponseBodyDataSourceSourceMQTTParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMQTTParameters"]));
        sourceMQTTParameters = make_shared<GetEventStreamingResponseBodyDataSourceSourceMQTTParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceSLSParameters"].type()) {
        GetEventStreamingResponseBodyDataSourceSourceSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceSLSParameters"]));
        sourceSLSParameters = make_shared<GetEventStreamingResponseBodyDataSourceSourceSLSParameters>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponseBodyDataSource() = default;
};
class GetEventStreamingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<GetEventStreamingResponseBodyDataRunOptions> runOptions{};
  shared_ptr<GetEventStreamingResponseBodyDataSink> sink{};
  shared_ptr<GetEventStreamingResponseBodyDataSource> source{};
  shared_ptr<string> status{};

  GetEventStreamingResponseBodyData() {}

  explicit GetEventStreamingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sink) {
      res["Sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        GetEventStreamingResponseBodyDataRunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<GetEventStreamingResponseBodyDataRunOptions>(model1);
      }
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        GetEventStreamingResponseBodyDataSink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        sink = make_shared<GetEventStreamingResponseBodyDataSink>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        GetEventStreamingResponseBodyDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<GetEventStreamingResponseBodyDataSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetEventStreamingResponseBodyData() = default;
};
class GetEventStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEventStreamingResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEventStreamingResponseBody() {}

  explicit GetEventStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetEventStreamingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEventStreamingResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetEventStreamingResponseBody() = default;
};
class GetEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEventStreamingResponseBody> body{};

  GetEventStreamingResponse() {}

  explicit GetEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEventStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEventStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~GetEventStreamingResponse() = default;
};
class GetRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  GetRuleRequest() {}

  explicit GetRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~GetRuleRequest() = default;
};
class GetRuleResponseBodyDataTargetsDeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  GetRuleResponseBodyDataTargetsDeadLetterQueue() {}

  explicit GetRuleResponseBodyDataTargetsDeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~GetRuleResponseBodyDataTargetsDeadLetterQueue() = default;
};
class GetRuleResponseBodyDataTargetsParamList : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> resourceKey{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  GetRuleResponseBodyDataTargetsParamList() {}

  explicit GetRuleResponseBodyDataTargetsParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (resourceKey) {
      res["ResourceKey"] = boost::any(*resourceKey);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("ResourceKey") != m.end() && !m["ResourceKey"].empty()) {
      resourceKey = make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetRuleResponseBodyDataTargetsParamList() = default;
};
class GetRuleResponseBodyDataTargets : public Darabonba::Model {
public:
  shared_ptr<GetRuleResponseBodyDataTargetsDeadLetterQueue> deadLetterQueue{};
  shared_ptr<map<string, boost::any>> detailMap{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<string> id{};
  shared_ptr<vector<GetRuleResponseBodyDataTargetsParamList>> paramList{};
  shared_ptr<string> pushRetryStrategy{};
  shared_ptr<string> pushSelector{};
  shared_ptr<string> type{};

  GetRuleResponseBodyDataTargets() {}

  explicit GetRuleResponseBodyDataTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detailMap) {
      res["DetailMap"] = boost::any(*detailMap);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for(auto item1:*paramList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    if (pushSelector) {
      res["PushSelector"] = boost::any(*pushSelector);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        GetRuleResponseBodyDataTargetsDeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<GetRuleResponseBodyDataTargetsDeadLetterQueue>(model1);
      }
    }
    if (m.find("DetailMap") != m.end() && !m["DetailMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DetailMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detailMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<GetRuleResponseBodyDataTargetsParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleResponseBodyDataTargetsParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<GetRuleResponseBodyDataTargetsParamList>>(expect1);
      }
    }
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
    if (m.find("PushSelector") != m.end() && !m["PushSelector"].empty()) {
      pushSelector = make_shared<string>(boost::any_cast<string>(m["PushSelector"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetRuleResponseBodyDataTargets() = default;
};
class GetRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createdTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<string> ruleARN{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetRuleResponseBodyDataTargets>> targets{};

  GetRuleResponseBodyData() {}

  explicit GetRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTimestamp) {
      res["CreatedTimestamp"] = boost::any(*createdTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (ruleARN) {
      res["RuleARN"] = boost::any(*ruleARN);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTimestamp") != m.end() && !m["CreatedTimestamp"].empty()) {
      createdTimestamp = make_shared<long>(boost::any_cast<long>(m["CreatedTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<GetRuleResponseBodyDataTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRuleResponseBodyDataTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<GetRuleResponseBodyDataTargets>>(expect1);
      }
    }
  }


  virtual ~GetRuleResponseBodyData() = default;
};
class GetRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRuleResponseBody() {}

  explicit GetRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetRuleResponseBody() = default;
};
class GetRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRuleResponseBody> body{};

  GetRuleResponse() {}

  explicit GetRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleResponse() = default;
};
class ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes : public Darabonba::Model {
public:
  shared_ptr<string> eventSourceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> name{};
  shared_ptr<string> shortName{};

  ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes() {}

  explicit ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortName) {
      res["ShortName"] = boost::any(*shortName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortName") != m.end() && !m["ShortName"].empty()) {
      shortName = make_shared<string>(boost::any_cast<string>(m["ShortName"]));
    }
  }


  virtual ~ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes() = default;
};
class ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<double> ctime{};
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<vector<ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes>> eventTypes{};
  shared_ptr<string> fullName{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList() {}

  explicit ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventTypes) {
      vector<boost::any> temp1;
      for(auto item1:*eventTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventTypes"] = boost::any(temp1);
    }
    if (fullName) {
      res["FullName"] = boost::any(*fullName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<double>(boost::any_cast<double>(m["Ctime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventTypes") != m.end() && !m["EventTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["EventTypes"].type()) {
        vector<ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventTypes = make_shared<vector<ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes>>(expect1);
      }
    }
    if (m.find("FullName") != m.end() && !m["FullName"].empty()) {
      fullName = make_shared<string>(boost::any_cast<string>(m["FullName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList() = default;
};
class ListAliyunOfficialEventSourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList>> eventSourceList{};

  ListAliyunOfficialEventSourcesResponseBodyData() {}

  explicit ListAliyunOfficialEventSourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceList) {
      vector<boost::any> temp1;
      for(auto item1:*eventSourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventSourceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSourceList") != m.end() && !m["EventSourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventSourceList"].type()) {
        vector<ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventSourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventSourceList = make_shared<vector<ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList>>(expect1);
      }
    }
  }


  virtual ~ListAliyunOfficialEventSourcesResponseBodyData() = default;
};
class ListAliyunOfficialEventSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListAliyunOfficialEventSourcesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAliyunOfficialEventSourcesResponseBody() {}

  explicit ListAliyunOfficialEventSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAliyunOfficialEventSourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAliyunOfficialEventSourcesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAliyunOfficialEventSourcesResponseBody() = default;
};
class ListAliyunOfficialEventSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAliyunOfficialEventSourcesResponseBody> body{};

  ListAliyunOfficialEventSourcesResponse() {}

  explicit ListAliyunOfficialEventSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAliyunOfficialEventSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAliyunOfficialEventSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAliyunOfficialEventSourcesResponse() = default;
};
class ListApiDestinationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationNamePrefix{};
  shared_ptr<string> connectionName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListApiDestinationsRequest() {}

  explicit ListApiDestinationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationNamePrefix) {
      res["ApiDestinationNamePrefix"] = boost::any(*apiDestinationNamePrefix);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationNamePrefix") != m.end() && !m["ApiDestinationNamePrefix"].empty()) {
      apiDestinationNamePrefix = make_shared<string>(boost::any_cast<string>(m["ApiDestinationNamePrefix"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListApiDestinationsRequest() = default;
};
class ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> method{};

  ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters() {}

  explicit ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
  }


  virtual ~ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters() = default;
};
class ListApiDestinationsResponseBodyDataApiDestinations : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters> httpApiParameters{};

  ListApiDestinationsResponseBodyDataApiDestinations() {}

  explicit ListApiDestinationsResponseBodyDataApiDestinations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (httpApiParameters) {
      res["HttpApiParameters"] = httpApiParameters ? boost::any(httpApiParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("HttpApiParameters") != m.end() && !m["HttpApiParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpApiParameters"].type()) {
        ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpApiParameters"]));
        httpApiParameters = make_shared<ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters>(model1);
      }
    }
  }


  virtual ~ListApiDestinationsResponseBodyDataApiDestinations() = default;
};
class ListApiDestinationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListApiDestinationsResponseBodyDataApiDestinations>> apiDestinations{};
  shared_ptr<double> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<double> total{};

  ListApiDestinationsResponseBodyData() {}

  explicit ListApiDestinationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinations) {
      vector<boost::any> temp1;
      for(auto item1:*apiDestinations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiDestinations"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinations") != m.end() && !m["ApiDestinations"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiDestinations"].type()) {
        vector<ListApiDestinationsResponseBodyDataApiDestinations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiDestinations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApiDestinationsResponseBodyDataApiDestinations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiDestinations = make_shared<vector<ListApiDestinationsResponseBodyDataApiDestinations>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<double>(boost::any_cast<double>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<double>(boost::any_cast<double>(m["Total"]));
    }
  }


  virtual ~ListApiDestinationsResponseBodyData() = default;
};
class ListApiDestinationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListApiDestinationsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListApiDestinationsResponseBody() {}

  explicit ListApiDestinationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListApiDestinationsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListApiDestinationsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListApiDestinationsResponseBody() = default;
};
class ListApiDestinationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApiDestinationsResponseBody> body{};

  ListApiDestinationsResponse() {}

  explicit ListApiDestinationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListApiDestinationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApiDestinationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApiDestinationsResponse() = default;
};
class ListConnectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionNamePrefix{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListConnectionsRequest() {}

  explicit ListConnectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionNamePrefix) {
      res["ConnectionNamePrefix"] = boost::any(*connectionNamePrefix);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionNamePrefix") != m.end() && !m["ConnectionNamePrefix"].empty()) {
      connectionNamePrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionNamePrefix"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListConnectionsRequest() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> apiKeyName{};
  shared_ptr<string> apiKeyValue{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyName) {
      res["ApiKeyName"] = boost::any(*apiKeyName);
    }
    if (apiKeyValue) {
      res["ApiKeyValue"] = boost::any(*apiKeyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyName") != m.end() && !m["ApiKeyName"].empty()) {
      apiKeyName = make_shared<string>(boost::any_cast<string>(m["ApiKeyName"]));
    }
    if (m.find("ApiKeyValue") != m.end() && !m["ApiKeyValue"].empty()) {
      apiKeyValue = make_shared<string>(boost::any_cast<string>(m["ApiKeyValue"]));
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters : public Darabonba::Model {
public:
  shared_ptr<string> clientID{};
  shared_ptr<string> clientSecret{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientID) {
      res["ClientID"] = boost::any(*clientID);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientID") != m.end() && !m["ClientID"].empty()) {
      clientID = make_shared<string>(boost::any_cast<string>(m["ClientID"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters{};
  shared_ptr<vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters{};
  shared_ptr<vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyParameters) {
      vector<boost::any> temp1;
      for(auto item1:*bodyParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyParameters"] = boost::any(temp1);
    }
    if (headerParameters) {
      vector<boost::any> temp1;
      for(auto item1:*headerParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HeaderParameters"] = boost::any(temp1);
    }
    if (queryStringParameters) {
      vector<boost::any> temp1;
      for(auto item1:*queryStringParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueryStringParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyParameters") != m.end() && !m["BodyParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyParameters"].type()) {
        vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyParameters = make_shared<vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>>(expect1);
      }
    }
    if (m.find("HeaderParameters") != m.end() && !m["HeaderParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HeaderParameters"].type()) {
        vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HeaderParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerParameters = make_shared<vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>>(expect1);
      }
    }
    if (m.find("QueryStringParameters") != m.end() && !m["QueryStringParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["QueryStringParameters"].type()) {
        vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueryStringParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryStringParameters = make_shared<vector<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>>(expect1);
      }
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> authorizationEndpoint{};
  shared_ptr<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters> clientParameters{};
  shared_ptr<string> httpMethod{};
  shared_ptr<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters{};

  ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationEndpoint) {
      res["AuthorizationEndpoint"] = boost::any(*authorizationEndpoint);
    }
    if (clientParameters) {
      res["ClientParameters"] = clientParameters ? boost::any(clientParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (OAuthHttpParameters) {
      res["OAuthHttpParameters"] = OAuthHttpParameters ? boost::any(OAuthHttpParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationEndpoint") != m.end() && !m["AuthorizationEndpoint"].empty()) {
      authorizationEndpoint = make_shared<string>(boost::any_cast<string>(m["AuthorizationEndpoint"]));
    }
    if (m.find("ClientParameters") != m.end() && !m["ClientParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientParameters"].type()) {
        ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientParameters"]));
        clientParameters = make_shared<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters>(model1);
      }
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("OAuthHttpParameters") != m.end() && !m["OAuthHttpParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthHttpParameters"].type()) {
        ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthHttpParameters"]));
        OAuthHttpParameters = make_shared<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters>(model1);
      }
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsAuthParameters : public Darabonba::Model {
public:
  shared_ptr<ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters> apiKeyAuthParameters{};
  shared_ptr<string> authorizationType{};
  shared_ptr<ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters> basicAuthParameters{};
  shared_ptr<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters> OAuthParameters{};

  ListConnectionsResponseBodyDataConnectionsAuthParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyAuthParameters) {
      res["ApiKeyAuthParameters"] = apiKeyAuthParameters ? boost::any(apiKeyAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authorizationType) {
      res["AuthorizationType"] = boost::any(*authorizationType);
    }
    if (basicAuthParameters) {
      res["BasicAuthParameters"] = basicAuthParameters ? boost::any(basicAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OAuthParameters) {
      res["OAuthParameters"] = OAuthParameters ? boost::any(OAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyAuthParameters") != m.end() && !m["ApiKeyAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiKeyAuthParameters"].type()) {
        ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiKeyAuthParameters"]));
        apiKeyAuthParameters = make_shared<ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters>(model1);
      }
    }
    if (m.find("AuthorizationType") != m.end() && !m["AuthorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["AuthorizationType"]));
    }
    if (m.find("BasicAuthParameters") != m.end() && !m["BasicAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["BasicAuthParameters"].type()) {
        ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BasicAuthParameters"]));
        basicAuthParameters = make_shared<ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters>(model1);
      }
    }
    if (m.find("OAuthParameters") != m.end() && !m["OAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthParameters"].type()) {
        ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthParameters"]));
        OAuthParameters = make_shared<ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters>(model1);
      }
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsAuthParameters() = default;
};
class ListConnectionsResponseBodyDataConnectionsNetworkParameters : public Darabonba::Model {
public:
  shared_ptr<string> networkType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitcheId{};

  ListConnectionsResponseBodyDataConnectionsNetworkParameters() {}

  explicit ListConnectionsResponseBodyDataConnectionsNetworkParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitcheId) {
      res["VswitcheId"] = boost::any(*vswitcheId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitcheId") != m.end() && !m["VswitcheId"].empty()) {
      vswitcheId = make_shared<string>(boost::any_cast<string>(m["VswitcheId"]));
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnectionsNetworkParameters() = default;
};
class ListConnectionsResponseBodyDataConnections : public Darabonba::Model {
public:
  shared_ptr<ListConnectionsResponseBodyDataConnectionsAuthParameters> authParameters{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<ListConnectionsResponseBodyDataConnectionsNetworkParameters> networkParameters{};

  ListConnectionsResponseBodyDataConnections() {}

  explicit ListConnectionsResponseBodyDataConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authParameters) {
      res["AuthParameters"] = authParameters ? boost::any(authParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (networkParameters) {
      res["NetworkParameters"] = networkParameters ? boost::any(networkParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthParameters") != m.end() && !m["AuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthParameters"].type()) {
        ListConnectionsResponseBodyDataConnectionsAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthParameters"]));
        authParameters = make_shared<ListConnectionsResponseBodyDataConnectionsAuthParameters>(model1);
      }
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("NetworkParameters") != m.end() && !m["NetworkParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkParameters"].type()) {
        ListConnectionsResponseBodyDataConnectionsNetworkParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkParameters"]));
        networkParameters = make_shared<ListConnectionsResponseBodyDataConnectionsNetworkParameters>(model1);
      }
    }
  }


  virtual ~ListConnectionsResponseBodyDataConnections() = default;
};
class ListConnectionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnectionsResponseBodyDataConnections>> connections{};
  shared_ptr<double> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<double> total{};

  ListConnectionsResponseBodyData() {}

  explicit ListConnectionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      vector<boost::any> temp1;
      for(auto item1:*connections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Connections"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      if (typeid(vector<boost::any>) == m["Connections"].type()) {
        vector<ListConnectionsResponseBodyDataConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Connections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectionsResponseBodyDataConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connections = make_shared<vector<ListConnectionsResponseBodyDataConnections>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<double>(boost::any_cast<double>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<double>(boost::any_cast<double>(m["Total"]));
    }
  }


  virtual ~ListConnectionsResponseBodyData() = default;
};
class ListConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListConnectionsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListConnectionsResponseBody() {}

  explicit ListConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListConnectionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListConnectionsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListConnectionsResponseBody() = default;
};
class ListConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConnectionsResponseBody> body{};

  ListConnectionsResponse() {}

  explicit ListConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConnectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnectionsResponse() = default;
};
class ListEventBusesRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> namePrefix{};
  shared_ptr<string> nextToken{};

  ListEventBusesRequest() {}

  explicit ListEventBusesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (namePrefix) {
      res["NamePrefix"] = boost::any(*namePrefix);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NamePrefix") != m.end() && !m["NamePrefix"].empty()) {
      namePrefix = make_shared<string>(boost::any_cast<string>(m["NamePrefix"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListEventBusesRequest() = default;
};
class ListEventBusesResponseBodyDataEventBuses : public Darabonba::Model {
public:
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<string> eventBusARN{};
  shared_ptr<string> eventBusName{};

  ListEventBusesResponseBodyDataEventBuses() {}

  explicit ListEventBusesResponseBodyDataEventBuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusARN) {
      res["EventBusARN"] = boost::any(*eventBusARN);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN = make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }


  virtual ~ListEventBusesResponseBodyDataEventBuses() = default;
};
class ListEventBusesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEventBusesResponseBodyDataEventBuses>> eventBuses{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> total{};

  ListEventBusesResponseBodyData() {}

  explicit ListEventBusesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBuses) {
      vector<boost::any> temp1;
      for(auto item1:*eventBuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventBuses"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBuses") != m.end() && !m["EventBuses"].empty()) {
      if (typeid(vector<boost::any>) == m["EventBuses"].type()) {
        vector<ListEventBusesResponseBodyDataEventBuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventBuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventBusesResponseBodyDataEventBuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventBuses = make_shared<vector<ListEventBusesResponseBodyDataEventBuses>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListEventBusesResponseBodyData() = default;
};
class ListEventBusesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEventBusesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEventBusesResponseBody() {}

  explicit ListEventBusesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListEventBusesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListEventBusesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListEventBusesResponseBody() = default;
};
class ListEventBusesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEventBusesResponseBody> body{};

  ListEventBusesResponse() {}

  explicit ListEventBusesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEventBusesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEventBusesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEventBusesResponse() = default;
};
class ListEventStreamingsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> namePrefix{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> sinkArn{};
  shared_ptr<string> sourceArn{};

  ListEventStreamingsRequest() {}

  explicit ListEventStreamingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (namePrefix) {
      res["NamePrefix"] = boost::any(*namePrefix);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (sinkArn) {
      res["SinkArn"] = boost::any(*sinkArn);
    }
    if (sourceArn) {
      res["SourceArn"] = boost::any(*sourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NamePrefix") != m.end() && !m["NamePrefix"].empty()) {
      namePrefix = make_shared<string>(boost::any_cast<string>(m["NamePrefix"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SinkArn") != m.end() && !m["SinkArn"].empty()) {
      sinkArn = make_shared<string>(boost::any_cast<string>(m["SinkArn"]));
    }
    if (m.find("SourceArn") != m.end() && !m["SourceArn"].empty()) {
      sourceArn = make_shared<string>(boost::any_cast<string>(m["SourceArn"]));
    }
  }


  virtual ~ListEventStreamingsRequest() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow : public Darabonba::Model {
public:
  shared_ptr<long> countBasedWindow{};
  shared_ptr<long> timeBasedWindow{};

  ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countBasedWindow) {
      res["CountBasedWindow"] = boost::any(*countBasedWindow);
    }
    if (timeBasedWindow) {
      res["TimeBasedWindow"] = boost::any(*timeBasedWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountBasedWindow") != m.end() && !m["CountBasedWindow"].empty()) {
      countBasedWindow = make_shared<long>(boost::any_cast<long>(m["CountBasedWindow"]));
    }
    if (m.find("TimeBasedWindow") != m.end() && !m["TimeBasedWindow"].empty()) {
      timeBasedWindow = make_shared<long>(boost::any_cast<long>(m["TimeBasedWindow"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy : public Darabonba::Model {
public:
  shared_ptr<double> maximumEventAgeInSeconds{};
  shared_ptr<double> maximumRetryAttempts{};
  shared_ptr<string> pushRetryStrategy{};

  ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumEventAgeInSeconds) {
      res["MaximumEventAgeInSeconds"] = boost::any(*maximumEventAgeInSeconds);
    }
    if (maximumRetryAttempts) {
      res["MaximumRetryAttempts"] = boost::any(*maximumRetryAttempts);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaximumEventAgeInSeconds") != m.end() && !m["MaximumEventAgeInSeconds"].empty()) {
      maximumEventAgeInSeconds = make_shared<double>(boost::any_cast<double>(m["MaximumEventAgeInSeconds"]));
    }
    if (m.find("MaximumRetryAttempts") != m.end() && !m["MaximumRetryAttempts"].empty()) {
      maximumRetryAttempts = make_shared<double>(boost::any_cast<double>(m["MaximumRetryAttempts"]));
    }
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsRunOptions : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow> batchWindow{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue> deadLetterQueue{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<long> maximumTasks{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy> retryStrategy{};

  ListEventStreamingsResponseBodyDataEventStreamingsRunOptions() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsRunOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchWindow) {
      res["BatchWindow"] = batchWindow ? boost::any(batchWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (retryStrategy) {
      res["RetryStrategy"] = retryStrategy ? boost::any(retryStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchWindow") != m.end() && !m["BatchWindow"].empty()) {
      if (typeid(map<string, boost::any>) == m["BatchWindow"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BatchWindow"]));
        batchWindow = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow>(model1);
      }
    }
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue>(model1);
      }
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<long>(boost::any_cast<long>(m["MaximumTasks"]));
    }
    if (m.find("RetryStrategy") != m.end() && !m["RetryStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetryStrategy"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetryStrategy"]));
        retryStrategy = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptions() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody> body{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency> concurrency{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName> functionName{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType> invocationType{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier> qualifier{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName> serviceName{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (concurrency) {
      res["Concurrency"] = concurrency ? boost::any(concurrency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionName) {
      res["FunctionName"] = functionName ? boost::any(functionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invocationType) {
      res["InvocationType"] = invocationType ? boost::any(invocationType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualifier) {
      res["Qualifier"] = qualifier ? boost::any(qualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceName) {
      res["ServiceName"] = serviceName ? boost::any(serviceName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersBody>(model1);
      }
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      if (typeid(map<string, boost::any>) == m["Concurrency"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Concurrency"]));
        concurrency = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency>(model1);
      }
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionName"]));
        functionName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersFunctionName>(model1);
      }
    }
    if (m.find("InvocationType") != m.end() && !m["InvocationType"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvocationType"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvocationType"]));
        invocationType = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersInvocationType>(model1);
      }
    }
    if (m.find("Qualifier") != m.end() && !m["Qualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Qualifier"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Qualifier"]));
        qualifier = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersQualifier>(model1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceName"]));
        serviceName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersServiceName>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName> executionName{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName> flowName{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput> input{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName> roleName{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionName) {
      res["ExecutionName"] = executionName ? boost::any(executionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flowName) {
      res["FlowName"] = flowName ? boost::any(flowName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (input) {
      res["Input"] = input ? boost::any(input->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecutionName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecutionName"]));
        executionName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName>(model1);
      }
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowName"]));
        flowName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName>(model1);
      }
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(map<string, boost::any>) == m["Input"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Input"]));
        input = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks> acks{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId> instanceId{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey> key{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic> topic{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acks) {
      res["Acks"] = acks ? boost::any(acks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = key ? boost::any(key->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acks") != m.end() && !m["Acks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acks"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acks"]));
        acks = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      if (typeid(map<string, boost::any>) == m["Key"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Key"]));
        key = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody> body{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode> isBase64Encode{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName> queueName{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isBase64Encode) {
      res["IsBase64Encode"] = isBase64Encode ? boost::any(isBase64Encode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersBody>(model1);
      }
    }
    if (m.find("IsBase64Encode") != m.end() && !m["IsBase64Encode"].empty()) {
      if (typeid(map<string, boost::any>) == m["IsBase64Encode"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IsBase64Encode"]));
        isBase64Encode = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersIsBase64Encode>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParametersQueueName>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody> body{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange> exchange{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId> instanceId{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId> messageId{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties> properties{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName> queueName{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey> routingKey{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType> targetType{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName> virtualHostName{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exchange) {
      res["Exchange"] = exchange ? boost::any(exchange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (messageId) {
      res["MessageId"] = messageId ? boost::any(messageId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (routingKey) {
      res["RoutingKey"] = routingKey ? boost::any(routingKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = targetType ? boost::any(targetType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (virtualHostName) {
      res["VirtualHostName"] = virtualHostName ? boost::any(virtualHostName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersBody>(model1);
      }
    }
    if (m.find("Exchange") != m.end() && !m["Exchange"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exchange"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exchange"]));
        exchange = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersExchange>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersInstanceId>(model1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      if (typeid(map<string, boost::any>) == m["MessageId"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MessageId"]));
        messageId = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersMessageId>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersProperties>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersQueueName>(model1);
      }
    }
    if (m.find("RoutingKey") != m.end() && !m["RoutingKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoutingKey"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoutingKey"]));
        routingKey = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersRoutingKey>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetType"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetType"]));
        targetType = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersTargetType>(model1);
      }
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualHostName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualHostName"]));
        virtualHostName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParametersVirtualHostName>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody> body{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId> instanceId{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys> keys{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties> properties{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags> tags{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic> topic{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId>(model1);
      }
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersLogStore : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersLogStore() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersLogStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersLogStore() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersProject : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersProject() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersProject() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersRoleName() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersRoleName() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersTopic() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersTopic() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody> body{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersLogStore> logStore{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersProject> project{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersRoleName> roleName{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersTopic> topic{};

  ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logStore) {
      res["LogStore"] = logStore ? boost::any(logStore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody>(model1);
      }
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogStore"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersLogStore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogStore"]));
        logStore = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersLogStore>(model1);
      }
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersProject>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersRoleName>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersTopic>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSink : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters> sinkFcParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters> sinkFnfParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters> sinkKafkaParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters> sinkMNSParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters> sinkRabbitMQParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters> sinkRocketMQParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters> sinkSLSParameters{};

  ListEventStreamingsResponseBodyDataEventStreamingsSink() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sinkFcParameters) {
      res["SinkFcParameters"] = sinkFcParameters ? boost::any(sinkFcParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkFnfParameters) {
      res["SinkFnfParameters"] = sinkFnfParameters ? boost::any(sinkFnfParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkKafkaParameters) {
      res["SinkKafkaParameters"] = sinkKafkaParameters ? boost::any(sinkKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkMNSParameters) {
      res["SinkMNSParameters"] = sinkMNSParameters ? boost::any(sinkMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRabbitMQParameters) {
      res["SinkRabbitMQParameters"] = sinkRabbitMQParameters ? boost::any(sinkRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRocketMQParameters) {
      res["SinkRocketMQParameters"] = sinkRocketMQParameters ? boost::any(sinkRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkSLSParameters) {
      res["SinkSLSParameters"] = sinkSLSParameters ? boost::any(sinkSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SinkFcParameters") != m.end() && !m["SinkFcParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFcParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFcParameters"]));
        sinkFcParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters>(model1);
      }
    }
    if (m.find("SinkFnfParameters") != m.end() && !m["SinkFnfParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFnfParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFnfParameters"]));
        sinkFnfParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters>(model1);
      }
    }
    if (m.find("SinkKafkaParameters") != m.end() && !m["SinkKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkKafkaParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkKafkaParameters"]));
        sinkKafkaParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters>(model1);
      }
    }
    if (m.find("SinkMNSParameters") != m.end() && !m["SinkMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkMNSParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkMNSParameters"]));
        sinkMNSParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters>(model1);
      }
    }
    if (m.find("SinkRabbitMQParameters") != m.end() && !m["SinkRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRabbitMQParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRabbitMQParameters"]));
        sinkRabbitMQParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters>(model1);
      }
    }
    if (m.find("SinkRocketMQParameters") != m.end() && !m["SinkRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRocketMQParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRocketMQParameters"]));
        sinkRocketMQParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters>(model1);
      }
    }
    if (m.find("SinkSLSParameters") != m.end() && !m["SinkSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkSLSParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkSLSParameters"]));
        sinkSLSParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSink() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters : public Darabonba::Model {
public:
  shared_ptr<string> brokerUrl{};
  shared_ptr<string> initCheckPoint{};
  shared_ptr<string> password{};
  shared_ptr<string> sid{};
  shared_ptr<string> taskId{};
  shared_ptr<string> topic{};
  shared_ptr<string> username{};

  ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerUrl) {
      res["BrokerUrl"] = boost::any(*brokerUrl);
    }
    if (initCheckPoint) {
      res["InitCheckPoint"] = boost::any(*initCheckPoint);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerUrl") != m.end() && !m["BrokerUrl"].empty()) {
      brokerUrl = make_shared<string>(boost::any_cast<string>(m["BrokerUrl"]));
    }
    if (m.find("InitCheckPoint") != m.end() && !m["InitCheckPoint"].empty()) {
      initCheckPoint = make_shared<string>(boost::any_cast<string>(m["InitCheckPoint"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tag{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> topic{};

  ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumePosition{};
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};
  shared_ptr<string> roleName{};

  ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumePosition) {
      res["ConsumePosition"] = boost::any(*consumePosition);
    }
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumePosition") != m.end() && !m["ConsumePosition"].empty()) {
      consumePosition = make_shared<string>(boost::any_cast<string>(m["ConsumePosition"]));
    }
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamingsSource : public Darabonba::Model {
public:
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters> sourceDTSParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters> sourceMNSParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters> sourceMQTTParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters> sourceSLSParameters{};

  ListEventStreamingsResponseBodyDataEventStreamingsSource() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamingsSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDTSParameters) {
      res["SourceDTSParameters"] = sourceDTSParameters ? boost::any(sourceDTSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMQTTParameters) {
      res["SourceMQTTParameters"] = sourceMQTTParameters ? boost::any(sourceMQTTParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceSLSParameters) {
      res["SourceSLSParameters"] = sourceSLSParameters ? boost::any(sourceSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceDTSParameters") != m.end() && !m["SourceDTSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceDTSParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceDTSParameters"]));
        sourceDTSParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceMQTTParameters") != m.end() && !m["SourceMQTTParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMQTTParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMQTTParameters"]));
        sourceMQTTParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceSLSParameters"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceSLSParameters"]));
        sourceSLSParameters = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSource() = default;
};
class ListEventStreamingsResponseBodyDataEventStreamings : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsRunOptions> runOptions{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSink> sink{};
  shared_ptr<ListEventStreamingsResponseBodyDataEventStreamingsSource> source{};
  shared_ptr<string> status{};

  ListEventStreamingsResponseBodyDataEventStreamings() {}

  explicit ListEventStreamingsResponseBodyDataEventStreamings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sink) {
      res["Sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsRunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsRunOptions>(model1);
      }
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        sink = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSink>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        ListEventStreamingsResponseBodyDataEventStreamingsSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<ListEventStreamingsResponseBodyDataEventStreamingsSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyDataEventStreamings() = default;
};
class ListEventStreamingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEventStreamingsResponseBodyDataEventStreamings>> eventStreamings{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> total{};

  ListEventStreamingsResponseBodyData() {}

  explicit ListEventStreamingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamings) {
      vector<boost::any> temp1;
      for(auto item1:*eventStreamings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventStreamings"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamings") != m.end() && !m["EventStreamings"].empty()) {
      if (typeid(vector<boost::any>) == m["EventStreamings"].type()) {
        vector<ListEventStreamingsResponseBodyDataEventStreamings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventStreamings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventStreamingsResponseBodyDataEventStreamings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventStreamings = make_shared<vector<ListEventStreamingsResponseBodyDataEventStreamings>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListEventStreamingsResponseBodyData() = default;
};
class ListEventStreamingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEventStreamingsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEventStreamingsResponseBody() {}

  explicit ListEventStreamingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListEventStreamingsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListEventStreamingsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListEventStreamingsResponseBody() = default;
};
class ListEventStreamingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEventStreamingsResponseBody> body{};

  ListEventStreamingsResponse() {}

  explicit ListEventStreamingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEventStreamingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEventStreamingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEventStreamingsResponse() = default;
};
class ListRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ruleNamePrefix{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ruleNamePrefix) {
      res["RuleNamePrefix"] = boost::any(*ruleNamePrefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RuleNamePrefix") != m.end() && !m["RuleNamePrefix"].empty()) {
      ruleNamePrefix = make_shared<string>(boost::any_cast<string>(m["RuleNamePrefix"]));
    }
  }


  virtual ~ListRulesRequest() = default;
};
class ListRulesResponseBodyDataRulesTargets : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<string> id{};
  shared_ptr<string> pushSelector{};
  shared_ptr<string> type{};

  ListRulesResponseBodyDataRulesTargets() {}

  explicit ListRulesResponseBodyDataRulesTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pushSelector) {
      res["PushSelector"] = boost::any(*pushSelector);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PushSelector") != m.end() && !m["PushSelector"].empty()) {
      pushSelector = make_shared<string>(boost::any_cast<string>(m["PushSelector"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListRulesResponseBodyDataRulesTargets() = default;
};
class ListRulesResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<long> createdTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> detailMap{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<string> ruleARN{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListRulesResponseBodyDataRulesTargets>> targets{};

  ListRulesResponseBodyDataRules() {}

  explicit ListRulesResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTimestamp) {
      res["CreatedTimestamp"] = boost::any(*createdTimestamp);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (detailMap) {
      res["DetailMap"] = boost::any(*detailMap);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (ruleARN) {
      res["RuleARN"] = boost::any(*ruleARN);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTimestamp") != m.end() && !m["CreatedTimestamp"].empty()) {
      createdTimestamp = make_shared<long>(boost::any_cast<long>(m["CreatedTimestamp"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DetailMap") != m.end() && !m["DetailMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DetailMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detailMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<ListRulesResponseBodyDataRulesTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyDataRulesTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<ListRulesResponseBodyDataRulesTargets>>(expect1);
      }
    }
  }


  virtual ~ListRulesResponseBodyDataRules() = default;
};
class ListRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListRulesResponseBodyDataRules>> rules{};
  shared_ptr<long> total{};

  ListRulesResponseBodyData() {}

  explicit ListRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListRulesResponseBodyDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListRulesResponseBodyDataRules>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListRulesResponseBodyData() = default;
};
class ListRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListRulesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRulesResponseBody() {}

  explicit ListRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListRulesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListRulesResponseBody() = default;
};
class ListRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRulesResponseBody> body{};

  ListRulesResponse() {}

  explicit ListRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRulesResponse() = default;
};
class ListTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> eventBusName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ruleName{};

  ListTargetsRequest() {}

  explicit ListTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~ListTargetsRequest() = default;
};
class ListTargetsResponseBodyDataTargetsParamList : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> resourceKey{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  ListTargetsResponseBodyDataTargetsParamList() {}

  explicit ListTargetsResponseBodyDataTargetsParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (resourceKey) {
      res["ResourceKey"] = boost::any(*resourceKey);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("ResourceKey") != m.end() && !m["ResourceKey"].empty()) {
      resourceKey = make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTargetsResponseBodyDataTargetsParamList() = default;
};
class ListTargetsResponseBodyDataTargets : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListTargetsResponseBodyDataTargetsParamList>> paramList{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> type{};

  ListTargetsResponseBodyDataTargets() {}

  explicit ListTargetsResponseBodyDataTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for(auto item1:*paramList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<ListTargetsResponseBodyDataTargetsParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTargetsResponseBodyDataTargetsParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<ListTargetsResponseBodyDataTargetsParamList>>(expect1);
      }
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTargetsResponseBodyDataTargets() = default;
};
class ListTargetsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListTargetsResponseBodyDataTargets>> targets{};
  shared_ptr<long> total{};

  ListTargetsResponseBodyData() {}

  explicit ListTargetsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<ListTargetsResponseBodyDataTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTargetsResponseBodyDataTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<ListTargetsResponseBodyDataTargets>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListTargetsResponseBodyData() = default;
};
class ListTargetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTargetsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTargetsResponseBody() {}

  explicit ListTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTargetsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTargetsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListTargetsResponseBody() = default;
};
class ListTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTargetsResponseBody> body{};

  ListTargetsResponse() {}

  explicit ListTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTargetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTargetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTargetsResponse() = default;
};
class ListUserDefinedEventSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<long> limit{};
  shared_ptr<string> namePrefix{};
  shared_ptr<string> nextToken{};

  ListUserDefinedEventSourcesRequest() {}

  explicit ListUserDefinedEventSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (namePrefix) {
      res["NamePrefix"] = boost::any(*namePrefix);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NamePrefix") != m.end() && !m["NamePrefix"].empty()) {
      namePrefix = make_shared<string>(boost::any_cast<string>(m["NamePrefix"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesRequest() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ip{};
  shared_ptr<vector<string>> method{};
  shared_ptr<vector<string>> publicWebHookUrl{};
  shared_ptr<vector<string>> referer{};
  shared_ptr<string> securityConfig{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> vpcWebHookUrl{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (publicWebHookUrl) {
      res["PublicWebHookUrl"] = boost::any(*publicWebHookUrl);
    }
    if (referer) {
      res["Referer"] = boost::any(*referer);
    }
    if (securityConfig) {
      res["SecurityConfig"] = boost::any(*securityConfig);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcWebHookUrl) {
      res["VpcWebHookUrl"] = boost::any(*vpcWebHookUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Method"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Method"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      method = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PublicWebHookUrl") != m.end() && !m["PublicWebHookUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PublicWebHookUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PublicWebHookUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicWebHookUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Referer") != m.end() && !m["Referer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Referer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Referer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      referer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityConfig") != m.end() && !m["SecurityConfig"].empty()) {
      securityConfig = make_shared<string>(boost::any_cast<string>(m["SecurityConfig"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcWebHookUrl") != m.end() && !m["VpcWebHookUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcWebHookUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcWebHookUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcWebHookUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maximumTasks{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<long>(boost::any_cast<long>(m["MaximumTasks"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceEndpoint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceNetwork{};
  shared_ptr<string> instancePassword{};
  shared_ptr<string> instanceSecurityGroupId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceUsername{};
  shared_ptr<string> instanceVSwitchIds{};
  shared_ptr<string> instanceVpcId{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tag{};
  shared_ptr<double> timestamp{};
  shared_ptr<string> topic{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceEndpoint) {
      res["InstanceEndpoint"] = boost::any(*instanceEndpoint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNetwork) {
      res["InstanceNetwork"] = boost::any(*instanceNetwork);
    }
    if (instancePassword) {
      res["InstancePassword"] = boost::any(*instancePassword);
    }
    if (instanceSecurityGroupId) {
      res["InstanceSecurityGroupId"] = boost::any(*instanceSecurityGroupId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceUsername) {
      res["InstanceUsername"] = boost::any(*instanceUsername);
    }
    if (instanceVSwitchIds) {
      res["InstanceVSwitchIds"] = boost::any(*instanceVSwitchIds);
    }
    if (instanceVpcId) {
      res["InstanceVpcId"] = boost::any(*instanceVpcId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceEndpoint") != m.end() && !m["InstanceEndpoint"].empty()) {
      instanceEndpoint = make_shared<string>(boost::any_cast<string>(m["InstanceEndpoint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNetwork") != m.end() && !m["InstanceNetwork"].empty()) {
      instanceNetwork = make_shared<string>(boost::any_cast<string>(m["InstanceNetwork"]));
    }
    if (m.find("InstancePassword") != m.end() && !m["InstancePassword"].empty()) {
      instancePassword = make_shared<string>(boost::any_cast<string>(m["InstancePassword"]));
    }
    if (m.find("InstanceSecurityGroupId") != m.end() && !m["InstanceSecurityGroupId"].empty()) {
      instanceSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceSecurityGroupId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceUsername") != m.end() && !m["InstanceUsername"].empty()) {
      instanceUsername = make_shared<string>(boost::any_cast<string>(m["InstanceUsername"]));
    }
    if (m.find("InstanceVSwitchIds") != m.end() && !m["InstanceVSwitchIds"].empty()) {
      instanceVSwitchIds = make_shared<string>(boost::any_cast<string>(m["InstanceVSwitchIds"]));
    }
    if (m.find("InstanceVpcId") != m.end() && !m["InstanceVpcId"].empty()) {
      instanceVpcId = make_shared<string>(boost::any_cast<string>(m["InstanceVpcId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<double>(boost::any_cast<double>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumePosition{};
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};
  shared_ptr<string> roleName{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumePosition) {
      res["ConsumePosition"] = boost::any(*consumePosition);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumePosition") != m.end() && !m["ConsumePosition"].empty()) {
      consumePosition = make_shared<string>(boost::any_cast<string>(m["ConsumePosition"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters : public Darabonba::Model {
public:
  shared_ptr<string> schedule{};
  shared_ptr<string> timeZone{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters() = default;
};
class ListUserDefinedEventSourcesResponseBodyDataEventSourceList : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<double> ctime{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> externalSourceType{};
  shared_ptr<string> name{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters> sourceHttpEventParameters{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters> sourceMNSParameters{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters> sourceSLSParameters{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters> sourceScheduledEventParameters{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListUserDefinedEventSourcesResponseBodyDataEventSourceList() {}

  explicit ListUserDefinedEventSourcesResponseBodyDataEventSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (externalSourceType) {
      res["ExternalSourceType"] = boost::any(*externalSourceType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceHttpEventParameters) {
      res["SourceHttpEventParameters"] = sourceHttpEventParameters ? boost::any(sourceHttpEventParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceSLSParameters) {
      res["SourceSLSParameters"] = sourceSLSParameters ? boost::any(sourceSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceScheduledEventParameters) {
      res["SourceScheduledEventParameters"] = sourceScheduledEventParameters ? boost::any(sourceScheduledEventParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<double>(boost::any_cast<double>(m["Ctime"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("ExternalSourceType") != m.end() && !m["ExternalSourceType"].empty()) {
      externalSourceType = make_shared<string>(boost::any_cast<string>(m["ExternalSourceType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceHttpEventParameters") != m.end() && !m["SourceHttpEventParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceHttpEventParameters"].type()) {
        ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceHttpEventParameters"]));
        sourceHttpEventParameters = make_shared<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceHttpEventParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceKafkaParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceSLSParameters"].type()) {
        ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceSLSParameters"]));
        sourceSLSParameters = make_shared<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceSLSParameters>(model1);
      }
    }
    if (m.find("SourceScheduledEventParameters") != m.end() && !m["SourceScheduledEventParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceScheduledEventParameters"].type()) {
        ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceScheduledEventParameters"]));
        sourceScheduledEventParameters = make_shared<ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceScheduledEventParameters>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceList() = default;
};
class ListUserDefinedEventSourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserDefinedEventSourcesResponseBodyDataEventSourceList>> eventSourceList{};

  ListUserDefinedEventSourcesResponseBodyData() {}

  explicit ListUserDefinedEventSourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceList) {
      vector<boost::any> temp1;
      for(auto item1:*eventSourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventSourceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSourceList") != m.end() && !m["EventSourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventSourceList"].type()) {
        vector<ListUserDefinedEventSourcesResponseBodyDataEventSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventSourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserDefinedEventSourcesResponseBodyDataEventSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventSourceList = make_shared<vector<ListUserDefinedEventSourcesResponseBodyDataEventSourceList>>(expect1);
      }
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBodyData() = default;
};
class ListUserDefinedEventSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListUserDefinedEventSourcesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListUserDefinedEventSourcesResponseBody() {}

  explicit ListUserDefinedEventSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListUserDefinedEventSourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListUserDefinedEventSourcesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListUserDefinedEventSourcesResponseBody() = default;
};
class ListUserDefinedEventSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserDefinedEventSourcesResponseBody> body{};

  ListUserDefinedEventSourcesResponse() {}

  explicit ListUserDefinedEventSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserDefinedEventSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserDefinedEventSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserDefinedEventSourcesResponse() = default;
};
class PauseEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  PauseEventStreamingRequest() {}

  explicit PauseEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~PauseEventStreamingRequest() = default;
};
class PauseEventStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PauseEventStreamingResponseBody() {}

  explicit PauseEventStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<bool>(boost::any_cast<bool>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PauseEventStreamingResponseBody() = default;
};
class PauseEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PauseEventStreamingResponseBody> body{};

  PauseEventStreamingResponse() {}

  explicit PauseEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PauseEventStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PauseEventStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~PauseEventStreamingResponse() = default;
};
class PutTargetsRequestTargetsDeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  PutTargetsRequestTargetsDeadLetterQueue() {}

  explicit PutTargetsRequestTargetsDeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~PutTargetsRequestTargetsDeadLetterQueue() = default;
};
class PutTargetsRequestTargetsParamList : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> resourceKey{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  PutTargetsRequestTargetsParamList() {}

  explicit PutTargetsRequestTargetsParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (resourceKey) {
      res["ResourceKey"] = boost::any(*resourceKey);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("ResourceKey") != m.end() && !m["ResourceKey"].empty()) {
      resourceKey = make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~PutTargetsRequestTargetsParamList() = default;
};
class PutTargetsRequestTargets : public Darabonba::Model {
public:
  shared_ptr<PutTargetsRequestTargetsDeadLetterQueue> deadLetterQueue{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<string> id{};
  shared_ptr<vector<PutTargetsRequestTargetsParamList>> paramList{};
  shared_ptr<string> pushRetryStrategy{};
  shared_ptr<string> type{};

  PutTargetsRequestTargets() {}

  explicit PutTargetsRequestTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for(auto item1:*paramList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        PutTargetsRequestTargetsDeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<PutTargetsRequestTargetsDeadLetterQueue>(model1);
      }
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<PutTargetsRequestTargetsParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PutTargetsRequestTargetsParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<PutTargetsRequestTargetsParamList>>(expect1);
      }
    }
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PutTargetsRequestTargets() = default;
};
class PutTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<vector<PutTargetsRequestTargets>> targets{};

  PutTargetsRequest() {}

  explicit PutTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<PutTargetsRequestTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PutTargetsRequestTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<PutTargetsRequestTargets>>(expect1);
      }
    }
  }


  virtual ~PutTargetsRequest() = default;
};
class PutTargetsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> targetsShrink{};

  PutTargetsShrinkRequest() {}

  explicit PutTargetsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (targetsShrink) {
      res["Targets"] = boost::any(*targetsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targetsShrink = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
  }


  virtual ~PutTargetsShrinkRequest() = default;
};
class PutTargetsResponseBodyDataErrorEntries : public Darabonba::Model {
public:
  shared_ptr<string> entryId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  PutTargetsResponseBodyDataErrorEntries() {}

  explicit PutTargetsResponseBodyDataErrorEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entryId) {
      res["EntryId"] = boost::any(*entryId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntryId") != m.end() && !m["EntryId"].empty()) {
      entryId = make_shared<string>(boost::any_cast<string>(m["EntryId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~PutTargetsResponseBodyDataErrorEntries() = default;
};
class PutTargetsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<PutTargetsResponseBodyDataErrorEntries>> errorEntries{};
  shared_ptr<long> errorEntriesCount{};

  PutTargetsResponseBodyData() {}

  explicit PutTargetsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorEntries) {
      vector<boost::any> temp1;
      for(auto item1:*errorEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorEntries"] = boost::any(temp1);
    }
    if (errorEntriesCount) {
      res["ErrorEntriesCount"] = boost::any(*errorEntriesCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorEntries") != m.end() && !m["ErrorEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorEntries"].type()) {
        vector<PutTargetsResponseBodyDataErrorEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PutTargetsResponseBodyDataErrorEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorEntries = make_shared<vector<PutTargetsResponseBodyDataErrorEntries>>(expect1);
      }
    }
    if (m.find("ErrorEntriesCount") != m.end() && !m["ErrorEntriesCount"].empty()) {
      errorEntriesCount = make_shared<long>(boost::any_cast<long>(m["ErrorEntriesCount"]));
    }
  }


  virtual ~PutTargetsResponseBodyData() = default;
};
class PutTargetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PutTargetsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PutTargetsResponseBody() {}

  explicit PutTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PutTargetsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PutTargetsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PutTargetsResponseBody() = default;
};
class PutTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutTargetsResponseBody> body{};

  PutTargetsResponse() {}

  explicit PutTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PutTargetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutTargetsResponseBody>(model1);
      }
    }
  }


  virtual ~PutTargetsResponse() = default;
};
class QueryEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};

  QueryEventRequest() {}

  explicit QueryEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~QueryEventRequest() = default;
};
class QueryEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEventResponseBody() {}

  explicit QueryEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEventResponseBody() = default;
};
class QueryEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEventResponseBody> body{};

  QueryEventResponse() {}

  explicit QueryEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEventResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEventResponse() = default;
};
class QueryEventTracesRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};

  QueryEventTracesRequest() {}

  explicit QueryEventTracesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~QueryEventTracesRequest() = default;
};
class QueryEventTracesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<long> actionTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> notifyLatency{};
  shared_ptr<string> notifyStatus{};
  shared_ptr<long> notifyTime{};
  shared_ptr<long> receivedTime{};
  shared_ptr<string> ruleMatchingTime{};
  shared_ptr<string> ruleName{};

  QueryEventTracesResponseBodyData() {}

  explicit QueryEventTracesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionTime) {
      res["ActionTime"] = boost::any(*actionTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (notifyLatency) {
      res["NotifyLatency"] = boost::any(*notifyLatency);
    }
    if (notifyStatus) {
      res["NotifyStatus"] = boost::any(*notifyStatus);
    }
    if (notifyTime) {
      res["NotifyTime"] = boost::any(*notifyTime);
    }
    if (receivedTime) {
      res["ReceivedTime"] = boost::any(*receivedTime);
    }
    if (ruleMatchingTime) {
      res["RuleMatchingTime"] = boost::any(*ruleMatchingTime);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionTime") != m.end() && !m["ActionTime"].empty()) {
      actionTime = make_shared<long>(boost::any_cast<long>(m["ActionTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("NotifyLatency") != m.end() && !m["NotifyLatency"].empty()) {
      notifyLatency = make_shared<string>(boost::any_cast<string>(m["NotifyLatency"]));
    }
    if (m.find("NotifyStatus") != m.end() && !m["NotifyStatus"].empty()) {
      notifyStatus = make_shared<string>(boost::any_cast<string>(m["NotifyStatus"]));
    }
    if (m.find("NotifyTime") != m.end() && !m["NotifyTime"].empty()) {
      notifyTime = make_shared<long>(boost::any_cast<long>(m["NotifyTime"]));
    }
    if (m.find("ReceivedTime") != m.end() && !m["ReceivedTime"].empty()) {
      receivedTime = make_shared<long>(boost::any_cast<long>(m["ReceivedTime"]));
    }
    if (m.find("RuleMatchingTime") != m.end() && !m["RuleMatchingTime"].empty()) {
      ruleMatchingTime = make_shared<string>(boost::any_cast<string>(m["RuleMatchingTime"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~QueryEventTracesResponseBodyData() = default;
};
class QueryEventTracesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryEventTracesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEventTracesResponseBody() {}

  explicit QueryEventTracesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryEventTracesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEventTracesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryEventTracesResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEventTracesResponseBody() = default;
};
class QueryEventTracesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEventTracesResponseBody> body{};

  QueryEventTracesResponse() {}

  explicit QueryEventTracesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEventTracesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEventTracesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEventTracesResponse() = default;
};
class QueryTracedEventByEventIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventSource{};

  QueryTracedEventByEventIdRequest() {}

  explicit QueryTracedEventByEventIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
  }


  virtual ~QueryTracedEventByEventIdRequest() = default;
};
class QueryTracedEventByEventIdResponseBodyDataEvents : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};
  shared_ptr<long> eventReceivedTime{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> eventType{};

  QueryTracedEventByEventIdResponseBodyDataEvents() {}

  explicit QueryTracedEventByEventIdResponseBodyDataEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventReceivedTime) {
      res["EventReceivedTime"] = boost::any(*eventReceivedTime);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventReceivedTime") != m.end() && !m["EventReceivedTime"].empty()) {
      eventReceivedTime = make_shared<long>(boost::any_cast<long>(m["EventReceivedTime"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
  }


  virtual ~QueryTracedEventByEventIdResponseBodyDataEvents() = default;
};
class QueryTracedEventByEventIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTracedEventByEventIdResponseBodyDataEvents>> events{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> total{};

  QueryTracedEventByEventIdResponseBodyData() {}

  explicit QueryTracedEventByEventIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<QueryTracedEventByEventIdResponseBodyDataEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTracedEventByEventIdResponseBodyDataEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<QueryTracedEventByEventIdResponseBodyDataEvents>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryTracedEventByEventIdResponseBodyData() = default;
};
class QueryTracedEventByEventIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryTracedEventByEventIdResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTracedEventByEventIdResponseBody() {}

  explicit QueryTracedEventByEventIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryTracedEventByEventIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTracedEventByEventIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryTracedEventByEventIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTracedEventByEventIdResponseBody() = default;
};
class QueryTracedEventByEventIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTracedEventByEventIdResponseBody> body{};

  QueryTracedEventByEventIdResponse() {}

  explicit QueryTracedEventByEventIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTracedEventByEventIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTracedEventByEventIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTracedEventByEventIdResponse() = default;
};
class QueryTracedEventsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> eventType{};
  shared_ptr<long> limit{};
  shared_ptr<string> matchedRule{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> startTime{};

  QueryTracedEventsRequest() {}

  explicit QueryTracedEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (matchedRule) {
      res["MatchedRule"] = boost::any(*matchedRule);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("MatchedRule") != m.end() && !m["MatchedRule"].empty()) {
      matchedRule = make_shared<string>(boost::any_cast<string>(m["MatchedRule"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryTracedEventsRequest() = default;
};
class QueryTracedEventsResponseBodyDataEvents : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};
  shared_ptr<long> eventReceivedTime{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> eventType{};

  QueryTracedEventsResponseBodyDataEvents() {}

  explicit QueryTracedEventsResponseBodyDataEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventReceivedTime) {
      res["EventReceivedTime"] = boost::any(*eventReceivedTime);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventReceivedTime") != m.end() && !m["EventReceivedTime"].empty()) {
      eventReceivedTime = make_shared<long>(boost::any_cast<long>(m["EventReceivedTime"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
  }


  virtual ~QueryTracedEventsResponseBodyDataEvents() = default;
};
class QueryTracedEventsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTracedEventsResponseBodyDataEvents>> events{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> total{};

  QueryTracedEventsResponseBodyData() {}

  explicit QueryTracedEventsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<QueryTracedEventsResponseBodyDataEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTracedEventsResponseBodyDataEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<QueryTracedEventsResponseBodyDataEvents>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryTracedEventsResponseBodyData() = default;
};
class QueryTracedEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryTracedEventsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTracedEventsResponseBody() {}

  explicit QueryTracedEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTracedEventsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTracedEventsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTracedEventsResponseBody() = default;
};
class QueryTracedEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTracedEventsResponseBody> body{};

  QueryTracedEventsResponse() {}

  explicit QueryTracedEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTracedEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTracedEventsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTracedEventsResponse() = default;
};
class StartEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  StartEventStreamingRequest() {}

  explicit StartEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~StartEventStreamingRequest() = default;
};
class StartEventStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartEventStreamingResponseBody() {}

  explicit StartEventStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<bool>(boost::any_cast<bool>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartEventStreamingResponseBody() = default;
};
class StartEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartEventStreamingResponseBody> body{};

  StartEventStreamingResponse() {}

  explicit StartEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartEventStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartEventStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~StartEventStreamingResponse() = default;
};
class TestEventPatternRequest : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventPattern{};

  TestEventPatternRequest() {}

  explicit TestEventPatternRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (eventPattern) {
      res["EventPattern"] = boost::any(*eventPattern);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("EventPattern") != m.end() && !m["EventPattern"].empty()) {
      eventPattern = make_shared<string>(boost::any_cast<string>(m["EventPattern"]));
    }
  }


  virtual ~TestEventPatternRequest() = default;
};
class TestEventPatternResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> result{};

  TestEventPatternResponseBodyData() {}

  explicit TestEventPatternResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~TestEventPatternResponseBodyData() = default;
};
class TestEventPatternResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<TestEventPatternResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TestEventPatternResponseBody() {}

  explicit TestEventPatternResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TestEventPatternResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TestEventPatternResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TestEventPatternResponseBody() = default;
};
class TestEventPatternResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TestEventPatternResponseBody> body{};

  TestEventPatternResponse() {}

  explicit TestEventPatternResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TestEventPatternResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestEventPatternResponseBody>(model1);
      }
    }
  }


  virtual ~TestEventPatternResponse() = default;
};
class UpdateApiDestinationRequestHttpApiParameters : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> method{};

  UpdateApiDestinationRequestHttpApiParameters() {}

  explicit UpdateApiDestinationRequestHttpApiParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
  }


  virtual ~UpdateApiDestinationRequestHttpApiParameters() = default;
};
class UpdateApiDestinationRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<UpdateApiDestinationRequestHttpApiParameters> httpApiParameters{};

  UpdateApiDestinationRequest() {}

  explicit UpdateApiDestinationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (httpApiParameters) {
      res["HttpApiParameters"] = httpApiParameters ? boost::any(httpApiParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HttpApiParameters") != m.end() && !m["HttpApiParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpApiParameters"].type()) {
        UpdateApiDestinationRequestHttpApiParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpApiParameters"]));
        httpApiParameters = make_shared<UpdateApiDestinationRequestHttpApiParameters>(model1);
      }
    }
  }


  virtual ~UpdateApiDestinationRequest() = default;
};
class UpdateApiDestinationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<string> httpApiParametersShrink{};

  UpdateApiDestinationShrinkRequest() {}

  explicit UpdateApiDestinationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (httpApiParametersShrink) {
      res["HttpApiParameters"] = boost::any(*httpApiParametersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HttpApiParameters") != m.end() && !m["HttpApiParameters"].empty()) {
      httpApiParametersShrink = make_shared<string>(boost::any_cast<string>(m["HttpApiParameters"]));
    }
  }


  virtual ~UpdateApiDestinationShrinkRequest() = default;
};
class UpdateApiDestinationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiDestinationName{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateApiDestinationResponseBody() {}

  explicit UpdateApiDestinationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDestinationName) {
      res["ApiDestinationName"] = boost::any(*apiDestinationName);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDestinationName") != m.end() && !m["ApiDestinationName"].empty()) {
      apiDestinationName = make_shared<string>(boost::any_cast<string>(m["ApiDestinationName"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateApiDestinationResponseBody() = default;
};
class UpdateApiDestinationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApiDestinationResponseBody> body{};

  UpdateApiDestinationResponse() {}

  explicit UpdateApiDestinationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateApiDestinationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApiDestinationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApiDestinationResponse() = default;
};
class UpdateConnectionRequestAuthParametersApiKeyAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> apiKeyName{};
  shared_ptr<string> apiKeyValue{};

  UpdateConnectionRequestAuthParametersApiKeyAuthParameters() {}

  explicit UpdateConnectionRequestAuthParametersApiKeyAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyName) {
      res["ApiKeyName"] = boost::any(*apiKeyName);
    }
    if (apiKeyValue) {
      res["ApiKeyValue"] = boost::any(*apiKeyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyName") != m.end() && !m["ApiKeyName"].empty()) {
      apiKeyName = make_shared<string>(boost::any_cast<string>(m["ApiKeyName"]));
    }
    if (m.find("ApiKeyValue") != m.end() && !m["ApiKeyValue"].empty()) {
      apiKeyValue = make_shared<string>(boost::any_cast<string>(m["ApiKeyValue"]));
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersApiKeyAuthParameters() = default;
};
class UpdateConnectionRequestAuthParametersBasicAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  UpdateConnectionRequestAuthParametersBasicAuthParameters() {}

  explicit UpdateConnectionRequestAuthParametersBasicAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersBasicAuthParameters() = default;
};
class UpdateConnectionRequestAuthParametersOAuthParametersClientParameters : public Darabonba::Model {
public:
  shared_ptr<string> clientID{};
  shared_ptr<string> clientSecret{};

  UpdateConnectionRequestAuthParametersOAuthParametersClientParameters() {}

  explicit UpdateConnectionRequestAuthParametersOAuthParametersClientParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientID) {
      res["ClientID"] = boost::any(*clientID);
    }
    if (clientSecret) {
      res["ClientSecret"] = boost::any(*clientSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientID") != m.end() && !m["ClientID"].empty()) {
      clientID = make_shared<string>(boost::any_cast<string>(m["ClientID"]));
    }
    if (m.find("ClientSecret") != m.end() && !m["ClientSecret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["ClientSecret"]));
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersOAuthParametersClientParameters() = default;
};
class UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() {}

  explicit UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters() = default;
};
class UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() {}

  explicit UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters() = default;
};
class UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters : public Darabonba::Model {
public:
  shared_ptr<string> isValueSecret{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() {}

  explicit UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isValueSecret) {
      res["IsValueSecret"] = boost::any(*isValueSecret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsValueSecret") != m.end() && !m["IsValueSecret"].empty()) {
      isValueSecret = make_shared<string>(boost::any_cast<string>(m["IsValueSecret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters() = default;
};
class UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters{};
  shared_ptr<vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters{};
  shared_ptr<vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters{};

  UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() {}

  explicit UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyParameters) {
      vector<boost::any> temp1;
      for(auto item1:*bodyParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BodyParameters"] = boost::any(temp1);
    }
    if (headerParameters) {
      vector<boost::any> temp1;
      for(auto item1:*headerParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HeaderParameters"] = boost::any(temp1);
    }
    if (queryStringParameters) {
      vector<boost::any> temp1;
      for(auto item1:*queryStringParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueryStringParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyParameters") != m.end() && !m["BodyParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["BodyParameters"].type()) {
        vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BodyParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodyParameters = make_shared<vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>>(expect1);
      }
    }
    if (m.find("HeaderParameters") != m.end() && !m["HeaderParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["HeaderParameters"].type()) {
        vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HeaderParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerParameters = make_shared<vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>>(expect1);
      }
    }
    if (m.find("QueryStringParameters") != m.end() && !m["QueryStringParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["QueryStringParameters"].type()) {
        vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueryStringParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryStringParameters = make_shared<vector<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>>(expect1);
      }
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() = default;
};
class UpdateConnectionRequestAuthParametersOAuthParameters : public Darabonba::Model {
public:
  shared_ptr<string> authorizationEndpoint{};
  shared_ptr<UpdateConnectionRequestAuthParametersOAuthParametersClientParameters> clientParameters{};
  shared_ptr<string> httpMethod{};
  shared_ptr<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters{};

  UpdateConnectionRequestAuthParametersOAuthParameters() {}

  explicit UpdateConnectionRequestAuthParametersOAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationEndpoint) {
      res["AuthorizationEndpoint"] = boost::any(*authorizationEndpoint);
    }
    if (clientParameters) {
      res["ClientParameters"] = clientParameters ? boost::any(clientParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (OAuthHttpParameters) {
      res["OAuthHttpParameters"] = OAuthHttpParameters ? boost::any(OAuthHttpParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationEndpoint") != m.end() && !m["AuthorizationEndpoint"].empty()) {
      authorizationEndpoint = make_shared<string>(boost::any_cast<string>(m["AuthorizationEndpoint"]));
    }
    if (m.find("ClientParameters") != m.end() && !m["ClientParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientParameters"].type()) {
        UpdateConnectionRequestAuthParametersOAuthParametersClientParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientParameters"]));
        clientParameters = make_shared<UpdateConnectionRequestAuthParametersOAuthParametersClientParameters>(model1);
      }
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("OAuthHttpParameters") != m.end() && !m["OAuthHttpParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthHttpParameters"].type()) {
        UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthHttpParameters"]));
        OAuthHttpParameters = make_shared<UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters>(model1);
      }
    }
  }


  virtual ~UpdateConnectionRequestAuthParametersOAuthParameters() = default;
};
class UpdateConnectionRequestAuthParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateConnectionRequestAuthParametersApiKeyAuthParameters> apiKeyAuthParameters{};
  shared_ptr<string> authorizationType{};
  shared_ptr<UpdateConnectionRequestAuthParametersBasicAuthParameters> basicAuthParameters{};
  shared_ptr<UpdateConnectionRequestAuthParametersOAuthParameters> OAuthParameters{};

  UpdateConnectionRequestAuthParameters() {}

  explicit UpdateConnectionRequestAuthParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKeyAuthParameters) {
      res["ApiKeyAuthParameters"] = apiKeyAuthParameters ? boost::any(apiKeyAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authorizationType) {
      res["AuthorizationType"] = boost::any(*authorizationType);
    }
    if (basicAuthParameters) {
      res["BasicAuthParameters"] = basicAuthParameters ? boost::any(basicAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OAuthParameters) {
      res["OAuthParameters"] = OAuthParameters ? boost::any(OAuthParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKeyAuthParameters") != m.end() && !m["ApiKeyAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiKeyAuthParameters"].type()) {
        UpdateConnectionRequestAuthParametersApiKeyAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiKeyAuthParameters"]));
        apiKeyAuthParameters = make_shared<UpdateConnectionRequestAuthParametersApiKeyAuthParameters>(model1);
      }
    }
    if (m.find("AuthorizationType") != m.end() && !m["AuthorizationType"].empty()) {
      authorizationType = make_shared<string>(boost::any_cast<string>(m["AuthorizationType"]));
    }
    if (m.find("BasicAuthParameters") != m.end() && !m["BasicAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["BasicAuthParameters"].type()) {
        UpdateConnectionRequestAuthParametersBasicAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BasicAuthParameters"]));
        basicAuthParameters = make_shared<UpdateConnectionRequestAuthParametersBasicAuthParameters>(model1);
      }
    }
    if (m.find("OAuthParameters") != m.end() && !m["OAuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["OAuthParameters"].type()) {
        UpdateConnectionRequestAuthParametersOAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OAuthParameters"]));
        OAuthParameters = make_shared<UpdateConnectionRequestAuthParametersOAuthParameters>(model1);
      }
    }
  }


  virtual ~UpdateConnectionRequestAuthParameters() = default;
};
class UpdateConnectionRequestNetworkParameters : public Darabonba::Model {
public:
  shared_ptr<string> networkType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitcheId{};

  UpdateConnectionRequestNetworkParameters() {}

  explicit UpdateConnectionRequestNetworkParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitcheId) {
      res["VswitcheId"] = boost::any(*vswitcheId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitcheId") != m.end() && !m["VswitcheId"].empty()) {
      vswitcheId = make_shared<string>(boost::any_cast<string>(m["VswitcheId"]));
    }
  }


  virtual ~UpdateConnectionRequestNetworkParameters() = default;
};
class UpdateConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateConnectionRequestAuthParameters> authParameters{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<UpdateConnectionRequestNetworkParameters> networkParameters{};

  UpdateConnectionRequest() {}

  explicit UpdateConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authParameters) {
      res["AuthParameters"] = authParameters ? boost::any(authParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (networkParameters) {
      res["NetworkParameters"] = networkParameters ? boost::any(networkParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthParameters") != m.end() && !m["AuthParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthParameters"].type()) {
        UpdateConnectionRequestAuthParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthParameters"]));
        authParameters = make_shared<UpdateConnectionRequestAuthParameters>(model1);
      }
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NetworkParameters") != m.end() && !m["NetworkParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkParameters"].type()) {
        UpdateConnectionRequestNetworkParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkParameters"]));
        networkParameters = make_shared<UpdateConnectionRequestNetworkParameters>(model1);
      }
    }
  }


  virtual ~UpdateConnectionRequest() = default;
};
class UpdateConnectionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> authParametersShrink{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> description{};
  shared_ptr<string> networkParametersShrink{};

  UpdateConnectionShrinkRequest() {}

  explicit UpdateConnectionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authParametersShrink) {
      res["AuthParameters"] = boost::any(*authParametersShrink);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (networkParametersShrink) {
      res["NetworkParameters"] = boost::any(*networkParametersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthParameters") != m.end() && !m["AuthParameters"].empty()) {
      authParametersShrink = make_shared<string>(boost::any_cast<string>(m["AuthParameters"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NetworkParameters") != m.end() && !m["NetworkParameters"].empty()) {
      networkParametersShrink = make_shared<string>(boost::any_cast<string>(m["NetworkParameters"]));
    }
  }


  virtual ~UpdateConnectionShrinkRequest() = default;
};
class UpdateConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateConnectionResponseBody() {}

  explicit UpdateConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateConnectionResponseBody() = default;
};
class UpdateConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConnectionResponseBody> body{};

  UpdateConnectionResponse() {}

  explicit UpdateConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConnectionResponse() = default;
};
class UpdateEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};

  UpdateEventBusRequest() {}

  explicit UpdateEventBusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }


  virtual ~UpdateEventBusRequest() = default;
};
class UpdateEventBusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEventBusResponseBody() {}

  explicit UpdateEventBusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEventBusResponseBody() = default;
};
class UpdateEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEventBusResponseBody> body{};

  UpdateEventBusResponse() {}

  explicit UpdateEventBusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEventBusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEventBusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEventBusResponse() = default;
};
class UpdateEventSourceRequestSourceHttpEventParameters : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ip{};
  shared_ptr<vector<string>> method{};
  shared_ptr<vector<string>> referer{};
  shared_ptr<string> securityConfig{};
  shared_ptr<string> type{};

  UpdateEventSourceRequestSourceHttpEventParameters() {}

  explicit UpdateEventSourceRequestSourceHttpEventParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (referer) {
      res["Referer"] = boost::any(*referer);
    }
    if (securityConfig) {
      res["SecurityConfig"] = boost::any(*securityConfig);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Method"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Method"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      method = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Referer") != m.end() && !m["Referer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Referer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Referer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      referer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityConfig") != m.end() && !m["SecurityConfig"].empty()) {
      securityConfig = make_shared<string>(boost::any_cast<string>(m["SecurityConfig"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateEventSourceRequestSourceHttpEventParameters() = default;
};
class UpdateEventSourceRequestSourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maximumTasks{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  UpdateEventSourceRequestSourceKafkaParameters() {}

  explicit UpdateEventSourceRequestSourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<long>(boost::any_cast<long>(m["MaximumTasks"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~UpdateEventSourceRequestSourceKafkaParameters() = default;
};
class UpdateEventSourceRequestSourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  UpdateEventSourceRequestSourceMNSParameters() {}

  explicit UpdateEventSourceRequestSourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateEventSourceRequestSourceMNSParameters() = default;
};
class UpdateEventSourceRequestSourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  UpdateEventSourceRequestSourceRabbitMQParameters() {}

  explicit UpdateEventSourceRequestSourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~UpdateEventSourceRequestSourceRabbitMQParameters() = default;
};
class UpdateEventSourceRequestSourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceEndpoint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceNetwork{};
  shared_ptr<string> instancePassword{};
  shared_ptr<string> instanceSecurityGroupId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceUsername{};
  shared_ptr<string> instanceVSwitchIds{};
  shared_ptr<string> instanceVpcId{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tag{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> topic{};

  UpdateEventSourceRequestSourceRocketMQParameters() {}

  explicit UpdateEventSourceRequestSourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceEndpoint) {
      res["InstanceEndpoint"] = boost::any(*instanceEndpoint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNetwork) {
      res["InstanceNetwork"] = boost::any(*instanceNetwork);
    }
    if (instancePassword) {
      res["InstancePassword"] = boost::any(*instancePassword);
    }
    if (instanceSecurityGroupId) {
      res["InstanceSecurityGroupId"] = boost::any(*instanceSecurityGroupId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceUsername) {
      res["InstanceUsername"] = boost::any(*instanceUsername);
    }
    if (instanceVSwitchIds) {
      res["InstanceVSwitchIds"] = boost::any(*instanceVSwitchIds);
    }
    if (instanceVpcId) {
      res["InstanceVpcId"] = boost::any(*instanceVpcId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceEndpoint") != m.end() && !m["InstanceEndpoint"].empty()) {
      instanceEndpoint = make_shared<string>(boost::any_cast<string>(m["InstanceEndpoint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNetwork") != m.end() && !m["InstanceNetwork"].empty()) {
      instanceNetwork = make_shared<string>(boost::any_cast<string>(m["InstanceNetwork"]));
    }
    if (m.find("InstancePassword") != m.end() && !m["InstancePassword"].empty()) {
      instancePassword = make_shared<string>(boost::any_cast<string>(m["InstancePassword"]));
    }
    if (m.find("InstanceSecurityGroupId") != m.end() && !m["InstanceSecurityGroupId"].empty()) {
      instanceSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceSecurityGroupId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceUsername") != m.end() && !m["InstanceUsername"].empty()) {
      instanceUsername = make_shared<string>(boost::any_cast<string>(m["InstanceUsername"]));
    }
    if (m.find("InstanceVSwitchIds") != m.end() && !m["InstanceVSwitchIds"].empty()) {
      instanceVSwitchIds = make_shared<string>(boost::any_cast<string>(m["InstanceVSwitchIds"]));
    }
    if (m.find("InstanceVpcId") != m.end() && !m["InstanceVpcId"].empty()) {
      instanceVpcId = make_shared<string>(boost::any_cast<string>(m["InstanceVpcId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~UpdateEventSourceRequestSourceRocketMQParameters() = default;
};
class UpdateEventSourceRequestSourceSLSParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumePosition{};
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};
  shared_ptr<string> roleName{};

  UpdateEventSourceRequestSourceSLSParameters() {}

  explicit UpdateEventSourceRequestSourceSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumePosition) {
      res["ConsumePosition"] = boost::any(*consumePosition);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumePosition") != m.end() && !m["ConsumePosition"].empty()) {
      consumePosition = make_shared<string>(boost::any_cast<string>(m["ConsumePosition"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~UpdateEventSourceRequestSourceSLSParameters() = default;
};
class UpdateEventSourceRequestSourceScheduledEventParameters : public Darabonba::Model {
public:
  shared_ptr<string> schedule{};
  shared_ptr<string> timeZone{};

  UpdateEventSourceRequestSourceScheduledEventParameters() {}

  explicit UpdateEventSourceRequestSourceScheduledEventParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~UpdateEventSourceRequestSourceScheduledEventParameters() = default;
};
class UpdateEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSourceName{};
  shared_ptr<UpdateEventSourceRequestSourceHttpEventParameters> sourceHttpEventParameters{};
  shared_ptr<UpdateEventSourceRequestSourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<UpdateEventSourceRequestSourceMNSParameters> sourceMNSParameters{};
  shared_ptr<UpdateEventSourceRequestSourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<UpdateEventSourceRequestSourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<UpdateEventSourceRequestSourceSLSParameters> sourceSLSParameters{};
  shared_ptr<UpdateEventSourceRequestSourceScheduledEventParameters> sourceScheduledEventParameters{};

  UpdateEventSourceRequest() {}

  explicit UpdateEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (sourceHttpEventParameters) {
      res["SourceHttpEventParameters"] = sourceHttpEventParameters ? boost::any(sourceHttpEventParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceSLSParameters) {
      res["SourceSLSParameters"] = sourceSLSParameters ? boost::any(sourceSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceScheduledEventParameters) {
      res["SourceScheduledEventParameters"] = sourceScheduledEventParameters ? boost::any(sourceScheduledEventParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("SourceHttpEventParameters") != m.end() && !m["SourceHttpEventParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceHttpEventParameters"].type()) {
        UpdateEventSourceRequestSourceHttpEventParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceHttpEventParameters"]));
        sourceHttpEventParameters = make_shared<UpdateEventSourceRequestSourceHttpEventParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        UpdateEventSourceRequestSourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<UpdateEventSourceRequestSourceKafkaParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        UpdateEventSourceRequestSourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<UpdateEventSourceRequestSourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        UpdateEventSourceRequestSourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<UpdateEventSourceRequestSourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        UpdateEventSourceRequestSourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<UpdateEventSourceRequestSourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceSLSParameters"].type()) {
        UpdateEventSourceRequestSourceSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceSLSParameters"]));
        sourceSLSParameters = make_shared<UpdateEventSourceRequestSourceSLSParameters>(model1);
      }
    }
    if (m.find("SourceScheduledEventParameters") != m.end() && !m["SourceScheduledEventParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceScheduledEventParameters"].type()) {
        UpdateEventSourceRequestSourceScheduledEventParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceScheduledEventParameters"]));
        sourceScheduledEventParameters = make_shared<UpdateEventSourceRequestSourceScheduledEventParameters>(model1);
      }
    }
  }


  virtual ~UpdateEventSourceRequest() = default;
};
class UpdateEventSourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSourceName{};
  shared_ptr<string> sourceHttpEventParametersShrink{};
  shared_ptr<string> sourceKafkaParametersShrink{};
  shared_ptr<string> sourceMNSParametersShrink{};
  shared_ptr<string> sourceRabbitMQParametersShrink{};
  shared_ptr<string> sourceRocketMQParametersShrink{};
  shared_ptr<string> sourceSLSParametersShrink{};
  shared_ptr<string> sourceScheduledEventParametersShrink{};

  UpdateEventSourceShrinkRequest() {}

  explicit UpdateEventSourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (sourceHttpEventParametersShrink) {
      res["SourceHttpEventParameters"] = boost::any(*sourceHttpEventParametersShrink);
    }
    if (sourceKafkaParametersShrink) {
      res["SourceKafkaParameters"] = boost::any(*sourceKafkaParametersShrink);
    }
    if (sourceMNSParametersShrink) {
      res["SourceMNSParameters"] = boost::any(*sourceMNSParametersShrink);
    }
    if (sourceRabbitMQParametersShrink) {
      res["SourceRabbitMQParameters"] = boost::any(*sourceRabbitMQParametersShrink);
    }
    if (sourceRocketMQParametersShrink) {
      res["SourceRocketMQParameters"] = boost::any(*sourceRocketMQParametersShrink);
    }
    if (sourceSLSParametersShrink) {
      res["SourceSLSParameters"] = boost::any(*sourceSLSParametersShrink);
    }
    if (sourceScheduledEventParametersShrink) {
      res["SourceScheduledEventParameters"] = boost::any(*sourceScheduledEventParametersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("SourceHttpEventParameters") != m.end() && !m["SourceHttpEventParameters"].empty()) {
      sourceHttpEventParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceHttpEventParameters"]));
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      sourceKafkaParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceKafkaParameters"]));
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      sourceMNSParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceMNSParameters"]));
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      sourceRabbitMQParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceRabbitMQParameters"]));
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      sourceRocketMQParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceRocketMQParameters"]));
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      sourceSLSParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceSLSParameters"]));
    }
    if (m.find("SourceScheduledEventParameters") != m.end() && !m["SourceScheduledEventParameters"].empty()) {
      sourceScheduledEventParametersShrink = make_shared<string>(boost::any_cast<string>(m["SourceScheduledEventParameters"]));
    }
  }


  virtual ~UpdateEventSourceShrinkRequest() = default;
};
class UpdateEventSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEventSourceResponseBody() {}

  explicit UpdateEventSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEventSourceResponseBody() = default;
};
class UpdateEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEventSourceResponseBody> body{};

  UpdateEventSourceResponse() {}

  explicit UpdateEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEventSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEventSourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEventSourceResponse() = default;
};
class UpdateEventStreamingRequestRunOptionsBatchWindow : public Darabonba::Model {
public:
  shared_ptr<long> countBasedWindow{};
  shared_ptr<long> timeBasedWindow{};

  UpdateEventStreamingRequestRunOptionsBatchWindow() {}

  explicit UpdateEventStreamingRequestRunOptionsBatchWindow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countBasedWindow) {
      res["CountBasedWindow"] = boost::any(*countBasedWindow);
    }
    if (timeBasedWindow) {
      res["TimeBasedWindow"] = boost::any(*timeBasedWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountBasedWindow") != m.end() && !m["CountBasedWindow"].empty()) {
      countBasedWindow = make_shared<long>(boost::any_cast<long>(m["CountBasedWindow"]));
    }
    if (m.find("TimeBasedWindow") != m.end() && !m["TimeBasedWindow"].empty()) {
      timeBasedWindow = make_shared<long>(boost::any_cast<long>(m["TimeBasedWindow"]));
    }
  }


  virtual ~UpdateEventStreamingRequestRunOptionsBatchWindow() = default;
};
class UpdateEventStreamingRequestRunOptionsDeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  UpdateEventStreamingRequestRunOptionsDeadLetterQueue() {}

  explicit UpdateEventStreamingRequestRunOptionsDeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~UpdateEventStreamingRequestRunOptionsDeadLetterQueue() = default;
};
class UpdateEventStreamingRequestRunOptionsRetryStrategy : public Darabonba::Model {
public:
  shared_ptr<long> maximumEventAgeInSeconds{};
  shared_ptr<long> maximumRetryAttempts{};
  shared_ptr<string> pushRetryStrategy{};

  UpdateEventStreamingRequestRunOptionsRetryStrategy() {}

  explicit UpdateEventStreamingRequestRunOptionsRetryStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumEventAgeInSeconds) {
      res["MaximumEventAgeInSeconds"] = boost::any(*maximumEventAgeInSeconds);
    }
    if (maximumRetryAttempts) {
      res["MaximumRetryAttempts"] = boost::any(*maximumRetryAttempts);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaximumEventAgeInSeconds") != m.end() && !m["MaximumEventAgeInSeconds"].empty()) {
      maximumEventAgeInSeconds = make_shared<long>(boost::any_cast<long>(m["MaximumEventAgeInSeconds"]));
    }
    if (m.find("MaximumRetryAttempts") != m.end() && !m["MaximumRetryAttempts"].empty()) {
      maximumRetryAttempts = make_shared<long>(boost::any_cast<long>(m["MaximumRetryAttempts"]));
    }
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
  }


  virtual ~UpdateEventStreamingRequestRunOptionsRetryStrategy() = default;
};
class UpdateEventStreamingRequestRunOptions : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestRunOptionsBatchWindow> batchWindow{};
  shared_ptr<UpdateEventStreamingRequestRunOptionsDeadLetterQueue> deadLetterQueue{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<long> maximumTasks{};
  shared_ptr<UpdateEventStreamingRequestRunOptionsRetryStrategy> retryStrategy{};

  UpdateEventStreamingRequestRunOptions() {}

  explicit UpdateEventStreamingRequestRunOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchWindow) {
      res["BatchWindow"] = batchWindow ? boost::any(batchWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (retryStrategy) {
      res["RetryStrategy"] = retryStrategy ? boost::any(retryStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchWindow") != m.end() && !m["BatchWindow"].empty()) {
      if (typeid(map<string, boost::any>) == m["BatchWindow"].type()) {
        UpdateEventStreamingRequestRunOptionsBatchWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BatchWindow"]));
        batchWindow = make_shared<UpdateEventStreamingRequestRunOptionsBatchWindow>(model1);
      }
    }
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        UpdateEventStreamingRequestRunOptionsDeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<UpdateEventStreamingRequestRunOptionsDeadLetterQueue>(model1);
      }
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<long>(boost::any_cast<long>(m["MaximumTasks"]));
    }
    if (m.find("RetryStrategy") != m.end() && !m["RetryStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetryStrategy"].type()) {
        UpdateEventStreamingRequestRunOptionsRetryStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetryStrategy"]));
        retryStrategy = make_shared<UpdateEventStreamingRequestRunOptionsRetryStrategy>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestRunOptions() = default;
};
class UpdateEventStreamingRequestSinkSinkFcParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFcParametersBody() {}

  explicit UpdateEventStreamingRequestSinkSinkFcParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFcParametersBody() = default;
};
class UpdateEventStreamingRequestSinkSinkFcParametersConcurrency : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFcParametersConcurrency() {}

  explicit UpdateEventStreamingRequestSinkSinkFcParametersConcurrency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFcParametersConcurrency() = default;
};
class UpdateEventStreamingRequestSinkSinkFcParametersFunctionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFcParametersFunctionName() {}

  explicit UpdateEventStreamingRequestSinkSinkFcParametersFunctionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFcParametersFunctionName() = default;
};
class UpdateEventStreamingRequestSinkSinkFcParametersInvocationType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFcParametersInvocationType() {}

  explicit UpdateEventStreamingRequestSinkSinkFcParametersInvocationType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFcParametersInvocationType() = default;
};
class UpdateEventStreamingRequestSinkSinkFcParametersQualifier : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFcParametersQualifier() {}

  explicit UpdateEventStreamingRequestSinkSinkFcParametersQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFcParametersQualifier() = default;
};
class UpdateEventStreamingRequestSinkSinkFcParametersServiceName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFcParametersServiceName() {}

  explicit UpdateEventStreamingRequestSinkSinkFcParametersServiceName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFcParametersServiceName() = default;
};
class UpdateEventStreamingRequestSinkSinkFcParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkFcParametersBody> body{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFcParametersConcurrency> concurrency{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFcParametersFunctionName> functionName{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFcParametersInvocationType> invocationType{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFcParametersQualifier> qualifier{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFcParametersServiceName> serviceName{};

  UpdateEventStreamingRequestSinkSinkFcParameters() {}

  explicit UpdateEventStreamingRequestSinkSinkFcParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (concurrency) {
      res["Concurrency"] = concurrency ? boost::any(concurrency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionName) {
      res["FunctionName"] = functionName ? boost::any(functionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invocationType) {
      res["InvocationType"] = invocationType ? boost::any(invocationType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualifier) {
      res["Qualifier"] = qualifier ? boost::any(qualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceName) {
      res["ServiceName"] = serviceName ? boost::any(serviceName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        UpdateEventStreamingRequestSinkSinkFcParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<UpdateEventStreamingRequestSinkSinkFcParametersBody>(model1);
      }
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      if (typeid(map<string, boost::any>) == m["Concurrency"].type()) {
        UpdateEventStreamingRequestSinkSinkFcParametersConcurrency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Concurrency"]));
        concurrency = make_shared<UpdateEventStreamingRequestSinkSinkFcParametersConcurrency>(model1);
      }
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionName"].type()) {
        UpdateEventStreamingRequestSinkSinkFcParametersFunctionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionName"]));
        functionName = make_shared<UpdateEventStreamingRequestSinkSinkFcParametersFunctionName>(model1);
      }
    }
    if (m.find("InvocationType") != m.end() && !m["InvocationType"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvocationType"].type()) {
        UpdateEventStreamingRequestSinkSinkFcParametersInvocationType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvocationType"]));
        invocationType = make_shared<UpdateEventStreamingRequestSinkSinkFcParametersInvocationType>(model1);
      }
    }
    if (m.find("Qualifier") != m.end() && !m["Qualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Qualifier"].type()) {
        UpdateEventStreamingRequestSinkSinkFcParametersQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Qualifier"]));
        qualifier = make_shared<UpdateEventStreamingRequestSinkSinkFcParametersQualifier>(model1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceName"].type()) {
        UpdateEventStreamingRequestSinkSinkFcParametersServiceName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceName"]));
        serviceName = make_shared<UpdateEventStreamingRequestSinkSinkFcParametersServiceName>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFcParameters() = default;
};
class UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName() {}

  explicit UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName() = default;
};
class UpdateEventStreamingRequestSinkSinkFnfParametersFlowName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFnfParametersFlowName() {}

  explicit UpdateEventStreamingRequestSinkSinkFnfParametersFlowName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFnfParametersFlowName() = default;
};
class UpdateEventStreamingRequestSinkSinkFnfParametersInput : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFnfParametersInput() {}

  explicit UpdateEventStreamingRequestSinkSinkFnfParametersInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFnfParametersInput() = default;
};
class UpdateEventStreamingRequestSinkSinkFnfParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkFnfParametersRoleName() {}

  explicit UpdateEventStreamingRequestSinkSinkFnfParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFnfParametersRoleName() = default;
};
class UpdateEventStreamingRequestSinkSinkFnfParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName> executionName{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFnfParametersFlowName> flowName{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFnfParametersInput> input{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFnfParametersRoleName> roleName{};

  UpdateEventStreamingRequestSinkSinkFnfParameters() {}

  explicit UpdateEventStreamingRequestSinkSinkFnfParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionName) {
      res["ExecutionName"] = executionName ? boost::any(executionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flowName) {
      res["FlowName"] = flowName ? boost::any(flowName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (input) {
      res["Input"] = input ? boost::any(input->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionName") != m.end() && !m["ExecutionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecutionName"].type()) {
        UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecutionName"]));
        executionName = make_shared<UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName>(model1);
      }
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowName"].type()) {
        UpdateEventStreamingRequestSinkSinkFnfParametersFlowName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowName"]));
        flowName = make_shared<UpdateEventStreamingRequestSinkSinkFnfParametersFlowName>(model1);
      }
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(map<string, boost::any>) == m["Input"].type()) {
        UpdateEventStreamingRequestSinkSinkFnfParametersInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Input"]));
        input = make_shared<UpdateEventStreamingRequestSinkSinkFnfParametersInput>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        UpdateEventStreamingRequestSinkSinkFnfParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<UpdateEventStreamingRequestSinkSinkFnfParametersRoleName>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkFnfParameters() = default;
};
class UpdateEventStreamingRequestSinkSinkKafkaParametersAcks : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkKafkaParametersAcks() {}

  explicit UpdateEventStreamingRequestSinkSinkKafkaParametersAcks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkKafkaParametersAcks() = default;
};
class UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId() {}

  explicit UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId() = default;
};
class UpdateEventStreamingRequestSinkSinkKafkaParametersKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkKafkaParametersKey() {}

  explicit UpdateEventStreamingRequestSinkSinkKafkaParametersKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkKafkaParametersKey() = default;
};
class UpdateEventStreamingRequestSinkSinkKafkaParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkKafkaParametersTopic() {}

  explicit UpdateEventStreamingRequestSinkSinkKafkaParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkKafkaParametersTopic() = default;
};
class UpdateEventStreamingRequestSinkSinkKafkaParametersValue : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkKafkaParametersValue() {}

  explicit UpdateEventStreamingRequestSinkSinkKafkaParametersValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkKafkaParametersValue() = default;
};
class UpdateEventStreamingRequestSinkSinkKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkKafkaParametersAcks> acks{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId> instanceId{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkKafkaParametersKey> key{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkKafkaParametersTopic> topic{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkKafkaParametersValue> value{};

  UpdateEventStreamingRequestSinkSinkKafkaParameters() {}

  explicit UpdateEventStreamingRequestSinkSinkKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acks) {
      res["Acks"] = acks ? boost::any(acks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = key ? boost::any(key->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acks") != m.end() && !m["Acks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acks"].type()) {
        UpdateEventStreamingRequestSinkSinkKafkaParametersAcks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acks"]));
        acks = make_shared<UpdateEventStreamingRequestSinkSinkKafkaParametersAcks>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      if (typeid(map<string, boost::any>) == m["Key"].type()) {
        UpdateEventStreamingRequestSinkSinkKafkaParametersKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Key"]));
        key = make_shared<UpdateEventStreamingRequestSinkSinkKafkaParametersKey>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        UpdateEventStreamingRequestSinkSinkKafkaParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<UpdateEventStreamingRequestSinkSinkKafkaParametersTopic>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        UpdateEventStreamingRequestSinkSinkKafkaParametersValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<UpdateEventStreamingRequestSinkSinkKafkaParametersValue>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkKafkaParameters() = default;
};
class UpdateEventStreamingRequestSinkSinkMNSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkMNSParametersBody() {}

  explicit UpdateEventStreamingRequestSinkSinkMNSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkMNSParametersBody() = default;
};
class UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode() {}

  explicit UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode() = default;
};
class UpdateEventStreamingRequestSinkSinkMNSParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkMNSParametersQueueName() {}

  explicit UpdateEventStreamingRequestSinkSinkMNSParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkMNSParametersQueueName() = default;
};
class UpdateEventStreamingRequestSinkSinkMNSParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkMNSParametersBody> body{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode> isBase64Encode{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkMNSParametersQueueName> queueName{};

  UpdateEventStreamingRequestSinkSinkMNSParameters() {}

  explicit UpdateEventStreamingRequestSinkSinkMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isBase64Encode) {
      res["IsBase64Encode"] = isBase64Encode ? boost::any(isBase64Encode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        UpdateEventStreamingRequestSinkSinkMNSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<UpdateEventStreamingRequestSinkSinkMNSParametersBody>(model1);
      }
    }
    if (m.find("IsBase64Encode") != m.end() && !m["IsBase64Encode"].empty()) {
      if (typeid(map<string, boost::any>) == m["IsBase64Encode"].type()) {
        UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IsBase64Encode"]));
        isBase64Encode = make_shared<UpdateEventStreamingRequestSinkSinkMNSParametersIsBase64Encode>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        UpdateEventStreamingRequestSinkSinkMNSParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<UpdateEventStreamingRequestSinkSinkMNSParametersQueueName>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkMNSParameters() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName() = default;
};
class UpdateEventStreamingRequestSinkSinkRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody> body{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange> exchange{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId> instanceId{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId> messageId{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties> properties{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName> queueName{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey> routingKey{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType> targetType{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName> virtualHostName{};

  UpdateEventStreamingRequestSinkSinkRabbitMQParameters() {}

  explicit UpdateEventStreamingRequestSinkSinkRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exchange) {
      res["Exchange"] = exchange ? boost::any(exchange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (messageId) {
      res["MessageId"] = messageId ? boost::any(messageId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (routingKey) {
      res["RoutingKey"] = routingKey ? boost::any(routingKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = targetType ? boost::any(targetType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (virtualHostName) {
      res["VirtualHostName"] = virtualHostName ? boost::any(virtualHostName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersBody>(model1);
      }
    }
    if (m.find("Exchange") != m.end() && !m["Exchange"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exchange"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exchange"]));
        exchange = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersExchange>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersInstanceId>(model1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      if (typeid(map<string, boost::any>) == m["MessageId"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MessageId"]));
        messageId = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersMessageId>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersProperties>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersQueueName>(model1);
      }
    }
    if (m.find("RoutingKey") != m.end() && !m["RoutingKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoutingKey"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoutingKey"]));
        routingKey = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersRoutingKey>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetType"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetType"]));
        targetType = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersTargetType>(model1);
      }
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualHostName"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualHostName"]));
        virtualHostName = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParametersVirtualHostName>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRabbitMQParameters() = default;
};
class UpdateEventStreamingRequestSinkSinkRocketMQParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRocketMQParametersBody() {}

  explicit UpdateEventStreamingRequestSinkSinkRocketMQParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParametersBody() = default;
};
class UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId() {}

  explicit UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId() = default;
};
class UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys() {}

  explicit UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys() = default;
};
class UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties() {}

  explicit UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties() = default;
};
class UpdateEventStreamingRequestSinkSinkRocketMQParametersTags : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRocketMQParametersTags() {}

  explicit UpdateEventStreamingRequestSinkSinkRocketMQParametersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParametersTags() = default;
};
class UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic() {}

  explicit UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic() = default;
};
class UpdateEventStreamingRequestSinkSinkRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkRocketMQParametersBody> body{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId> instanceId{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys> keys{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties> properties{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRocketMQParametersTags> tags{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic> topic{};

  UpdateEventStreamingRequestSinkSinkRocketMQParameters() {}

  explicit UpdateEventStreamingRequestSinkSinkRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        UpdateEventStreamingRequestSinkSinkRocketMQParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<UpdateEventStreamingRequestSinkSinkRocketMQParametersBody>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId>(model1);
      }
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        UpdateEventStreamingRequestSinkSinkRocketMQParametersTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<UpdateEventStreamingRequestSinkSinkRocketMQParametersTags>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParameters() = default;
};
class UpdateEventStreamingRequestSinkSinkSLSParametersBody : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkSLSParametersBody() {}

  explicit UpdateEventStreamingRequestSinkSinkSLSParametersBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkSLSParametersBody() = default;
};
class UpdateEventStreamingRequestSinkSinkSLSParametersLogStore : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkSLSParametersLogStore() {}

  explicit UpdateEventStreamingRequestSinkSinkSLSParametersLogStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkSLSParametersLogStore() = default;
};
class UpdateEventStreamingRequestSinkSinkSLSParametersProject : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkSLSParametersProject() {}

  explicit UpdateEventStreamingRequestSinkSinkSLSParametersProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkSLSParametersProject() = default;
};
class UpdateEventStreamingRequestSinkSinkSLSParametersRoleName : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkSLSParametersRoleName() {}

  explicit UpdateEventStreamingRequestSinkSinkSLSParametersRoleName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkSLSParametersRoleName() = default;
};
class UpdateEventStreamingRequestSinkSinkSLSParametersTopic : public Darabonba::Model {
public:
  shared_ptr<string> form{};
  shared_ptr<string> template_{};
  shared_ptr<string> value{};

  UpdateEventStreamingRequestSinkSinkSLSParametersTopic() {}

  explicit UpdateEventStreamingRequestSinkSinkSLSParametersTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkSLSParametersTopic() = default;
};
class UpdateEventStreamingRequestSinkSinkSLSParameters : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkSLSParametersBody> body{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkSLSParametersLogStore> logStore{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkSLSParametersProject> project{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkSLSParametersRoleName> roleName{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkSLSParametersTopic> topic{};

  UpdateEventStreamingRequestSinkSinkSLSParameters() {}

  explicit UpdateEventStreamingRequestSinkSinkSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logStore) {
      res["LogStore"] = logStore ? boost::any(logStore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        UpdateEventStreamingRequestSinkSinkSLSParametersBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<UpdateEventStreamingRequestSinkSinkSLSParametersBody>(model1);
      }
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogStore"].type()) {
        UpdateEventStreamingRequestSinkSinkSLSParametersLogStore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogStore"]));
        logStore = make_shared<UpdateEventStreamingRequestSinkSinkSLSParametersLogStore>(model1);
      }
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        UpdateEventStreamingRequestSinkSinkSLSParametersProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<UpdateEventStreamingRequestSinkSinkSLSParametersProject>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        UpdateEventStreamingRequestSinkSinkSLSParametersRoleName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<UpdateEventStreamingRequestSinkSinkSLSParametersRoleName>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        UpdateEventStreamingRequestSinkSinkSLSParametersTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<UpdateEventStreamingRequestSinkSinkSLSParametersTopic>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSinkSinkSLSParameters() = default;
};
class UpdateEventStreamingRequestSink : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSinkSinkFcParameters> sinkFcParameters{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkFnfParameters> sinkFnfParameters{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkKafkaParameters> sinkKafkaParameters{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkMNSParameters> sinkMNSParameters{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRabbitMQParameters> sinkRabbitMQParameters{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkRocketMQParameters> sinkRocketMQParameters{};
  shared_ptr<UpdateEventStreamingRequestSinkSinkSLSParameters> sinkSLSParameters{};

  UpdateEventStreamingRequestSink() {}

  explicit UpdateEventStreamingRequestSink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sinkFcParameters) {
      res["SinkFcParameters"] = sinkFcParameters ? boost::any(sinkFcParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkFnfParameters) {
      res["SinkFnfParameters"] = sinkFnfParameters ? boost::any(sinkFnfParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkKafkaParameters) {
      res["SinkKafkaParameters"] = sinkKafkaParameters ? boost::any(sinkKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkMNSParameters) {
      res["SinkMNSParameters"] = sinkMNSParameters ? boost::any(sinkMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRabbitMQParameters) {
      res["SinkRabbitMQParameters"] = sinkRabbitMQParameters ? boost::any(sinkRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRocketMQParameters) {
      res["SinkRocketMQParameters"] = sinkRocketMQParameters ? boost::any(sinkRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkSLSParameters) {
      res["SinkSLSParameters"] = sinkSLSParameters ? boost::any(sinkSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SinkFcParameters") != m.end() && !m["SinkFcParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFcParameters"].type()) {
        UpdateEventStreamingRequestSinkSinkFcParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFcParameters"]));
        sinkFcParameters = make_shared<UpdateEventStreamingRequestSinkSinkFcParameters>(model1);
      }
    }
    if (m.find("SinkFnfParameters") != m.end() && !m["SinkFnfParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFnfParameters"].type()) {
        UpdateEventStreamingRequestSinkSinkFnfParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFnfParameters"]));
        sinkFnfParameters = make_shared<UpdateEventStreamingRequestSinkSinkFnfParameters>(model1);
      }
    }
    if (m.find("SinkKafkaParameters") != m.end() && !m["SinkKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkKafkaParameters"].type()) {
        UpdateEventStreamingRequestSinkSinkKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkKafkaParameters"]));
        sinkKafkaParameters = make_shared<UpdateEventStreamingRequestSinkSinkKafkaParameters>(model1);
      }
    }
    if (m.find("SinkMNSParameters") != m.end() && !m["SinkMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkMNSParameters"].type()) {
        UpdateEventStreamingRequestSinkSinkMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkMNSParameters"]));
        sinkMNSParameters = make_shared<UpdateEventStreamingRequestSinkSinkMNSParameters>(model1);
      }
    }
    if (m.find("SinkRabbitMQParameters") != m.end() && !m["SinkRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRabbitMQParameters"].type()) {
        UpdateEventStreamingRequestSinkSinkRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRabbitMQParameters"]));
        sinkRabbitMQParameters = make_shared<UpdateEventStreamingRequestSinkSinkRabbitMQParameters>(model1);
      }
    }
    if (m.find("SinkRocketMQParameters") != m.end() && !m["SinkRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRocketMQParameters"].type()) {
        UpdateEventStreamingRequestSinkSinkRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRocketMQParameters"]));
        sinkRocketMQParameters = make_shared<UpdateEventStreamingRequestSinkSinkRocketMQParameters>(model1);
      }
    }
    if (m.find("SinkSLSParameters") != m.end() && !m["SinkSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkSLSParameters"].type()) {
        UpdateEventStreamingRequestSinkSinkSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkSLSParameters"]));
        sinkSLSParameters = make_shared<UpdateEventStreamingRequestSinkSinkSLSParameters>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSink() = default;
};
class UpdateEventStreamingRequestSourceSourceDTSParameters : public Darabonba::Model {
public:
  shared_ptr<string> brokerUrl{};
  shared_ptr<long> initCheckPoint{};
  shared_ptr<string> password{};
  shared_ptr<string> sid{};
  shared_ptr<string> taskId{};
  shared_ptr<string> topic{};
  shared_ptr<string> username{};

  UpdateEventStreamingRequestSourceSourceDTSParameters() {}

  explicit UpdateEventStreamingRequestSourceSourceDTSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerUrl) {
      res["BrokerUrl"] = boost::any(*brokerUrl);
    }
    if (initCheckPoint) {
      res["InitCheckPoint"] = boost::any(*initCheckPoint);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerUrl") != m.end() && !m["BrokerUrl"].empty()) {
      brokerUrl = make_shared<string>(boost::any_cast<string>(m["BrokerUrl"]));
    }
    if (m.find("InitCheckPoint") != m.end() && !m["InitCheckPoint"].empty()) {
      initCheckPoint = make_shared<long>(boost::any_cast<long>(m["InitCheckPoint"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSourceSourceDTSParameters() = default;
};
class UpdateEventStreamingRequestSourceSourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> network{};
  shared_ptr<string> offsetReset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> topic{};
  shared_ptr<string> vSwitchIds{};
  shared_ptr<string> vpcId{};

  UpdateEventStreamingRequestSourceSourceKafkaParameters() {}

  explicit UpdateEventStreamingRequestSourceSourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (offsetReset) {
      res["OffsetReset"] = boost::any(*offsetReset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OffsetReset") != m.end() && !m["OffsetReset"].empty()) {
      offsetReset = make_shared<string>(boost::any_cast<string>(m["OffsetReset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIds = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSourceSourceKafkaParameters() = default;
};
class UpdateEventStreamingRequestSourceSourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<bool> isBase64Decode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};

  UpdateEventStreamingRequestSourceSourceMNSParameters() {}

  explicit UpdateEventStreamingRequestSourceSourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSourceSourceMNSParameters() = default;
};
class UpdateEventStreamingRequestSourceSourceMQTTParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  UpdateEventStreamingRequestSourceSourceMQTTParameters() {}

  explicit UpdateEventStreamingRequestSourceSourceMQTTParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSourceSourceMQTTParameters() = default;
};
class UpdateEventStreamingRequestSourceSourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualHostName{};

  UpdateEventStreamingRequestSourceSourceRabbitMQParameters() {}

  explicit UpdateEventStreamingRequestSourceSourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSourceSourceRabbitMQParameters() = default;
};
class UpdateEventStreamingRequestSourceSourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> groupID{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> offset{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tag{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> topic{};

  UpdateEventStreamingRequestSourceSourceRocketMQParameters() {}

  explicit UpdateEventStreamingRequestSourceSourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSourceSourceRocketMQParameters() = default;
};
class UpdateEventStreamingRequestSourceSourceSLSParameters : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  UpdateEventStreamingRequestSourceSourceSLSParameters() {}

  explicit UpdateEventStreamingRequestSourceSourceSLSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~UpdateEventStreamingRequestSourceSourceSLSParameters() = default;
};
class UpdateEventStreamingRequestSource : public Darabonba::Model {
public:
  shared_ptr<UpdateEventStreamingRequestSourceSourceDTSParameters> sourceDTSParameters{};
  shared_ptr<UpdateEventStreamingRequestSourceSourceKafkaParameters> sourceKafkaParameters{};
  shared_ptr<UpdateEventStreamingRequestSourceSourceMNSParameters> sourceMNSParameters{};
  shared_ptr<UpdateEventStreamingRequestSourceSourceMQTTParameters> sourceMQTTParameters{};
  shared_ptr<UpdateEventStreamingRequestSourceSourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<UpdateEventStreamingRequestSourceSourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<UpdateEventStreamingRequestSourceSourceSLSParameters> sourceSLSParameters{};

  UpdateEventStreamingRequestSource() {}

  explicit UpdateEventStreamingRequestSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDTSParameters) {
      res["SourceDTSParameters"] = sourceDTSParameters ? boost::any(sourceDTSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMQTTParameters) {
      res["SourceMQTTParameters"] = sourceMQTTParameters ? boost::any(sourceMQTTParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceSLSParameters) {
      res["SourceSLSParameters"] = sourceSLSParameters ? boost::any(sourceSLSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceDTSParameters") != m.end() && !m["SourceDTSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceDTSParameters"].type()) {
        UpdateEventStreamingRequestSourceSourceDTSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceDTSParameters"]));
        sourceDTSParameters = make_shared<UpdateEventStreamingRequestSourceSourceDTSParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        UpdateEventStreamingRequestSourceSourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<UpdateEventStreamingRequestSourceSourceKafkaParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        UpdateEventStreamingRequestSourceSourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<UpdateEventStreamingRequestSourceSourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceMQTTParameters") != m.end() && !m["SourceMQTTParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMQTTParameters"].type()) {
        UpdateEventStreamingRequestSourceSourceMQTTParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMQTTParameters"]));
        sourceMQTTParameters = make_shared<UpdateEventStreamingRequestSourceSourceMQTTParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        UpdateEventStreamingRequestSourceSourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<UpdateEventStreamingRequestSourceSourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        UpdateEventStreamingRequestSourceSourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<UpdateEventStreamingRequestSourceSourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceSLSParameters") != m.end() && !m["SourceSLSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceSLSParameters"].type()) {
        UpdateEventStreamingRequestSourceSourceSLSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceSLSParameters"]));
        sourceSLSParameters = make_shared<UpdateEventStreamingRequestSourceSourceSLSParameters>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequestSource() = default;
};
class UpdateEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<UpdateEventStreamingRequestRunOptions> runOptions{};
  shared_ptr<UpdateEventStreamingRequestSink> sink{};
  shared_ptr<UpdateEventStreamingRequestSource> source{};

  UpdateEventStreamingRequest() {}

  explicit UpdateEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sink) {
      res["Sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        UpdateEventStreamingRequestRunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<UpdateEventStreamingRequestRunOptions>(model1);
      }
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        UpdateEventStreamingRequestSink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        sink = make_shared<UpdateEventStreamingRequestSink>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        UpdateEventStreamingRequestSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<UpdateEventStreamingRequestSource>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingRequest() = default;
};
class UpdateEventStreamingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<string> runOptionsShrink{};
  shared_ptr<string> sinkShrink{};
  shared_ptr<string> sourceShrink{};

  UpdateEventStreamingShrinkRequest() {}

  explicit UpdateEventStreamingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (runOptionsShrink) {
      res["RunOptions"] = boost::any(*runOptionsShrink);
    }
    if (sinkShrink) {
      res["Sink"] = boost::any(*sinkShrink);
    }
    if (sourceShrink) {
      res["Source"] = boost::any(*sourceShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      runOptionsShrink = make_shared<string>(boost::any_cast<string>(m["RunOptions"]));
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      sinkShrink = make_shared<string>(boost::any_cast<string>(m["Sink"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      sourceShrink = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateEventStreamingShrinkRequest() = default;
};
class UpdateEventStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEventStreamingResponseBody() {}

  explicit UpdateEventStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEventStreamingResponseBody() = default;
};
class UpdateEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEventStreamingResponseBody> body{};

  UpdateEventStreamingResponse() {}

  explicit UpdateEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEventStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEventStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEventStreamingResponse() = default;
};
class UpdateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> filterPattern{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};

  UpdateRuleRequest() {}

  explicit UpdateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateRuleRequest() = default;
};
class UpdateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateRuleResponseBody() {}

  explicit UpdateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateRuleResponseBody() = default;
};
class UpdateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRuleResponseBody> body{};

  UpdateRuleResponse() {}

  explicit UpdateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRuleResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  CreateApiDestinationResponse createApiDestinationWithOptions(shared_ptr<CreateApiDestinationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApiDestinationResponse createApiDestination(shared_ptr<CreateApiDestinationRequest> request);
  CreateConnectionResponse createConnectionWithOptions(shared_ptr<CreateConnectionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConnectionResponse createConnection(shared_ptr<CreateConnectionRequest> request);
  CreateEventBusResponse createEventBusWithOptions(shared_ptr<CreateEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventBusResponse createEventBus(shared_ptr<CreateEventBusRequest> request);
  CreateEventSourceResponse createEventSourceWithOptions(shared_ptr<CreateEventSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventSourceResponse createEventSource(shared_ptr<CreateEventSourceRequest> request);
  CreateEventStreamingResponse createEventStreamingWithOptions(shared_ptr<CreateEventStreamingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventStreamingResponse createEventStreaming(shared_ptr<CreateEventStreamingRequest> request);
  CreateRuleResponse createRuleWithOptions(shared_ptr<CreateRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateServiceLinkedRoleForProductResponse createServiceLinkedRoleForProductWithOptions(shared_ptr<CreateServiceLinkedRoleForProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleForProductResponse createServiceLinkedRoleForProduct(shared_ptr<CreateServiceLinkedRoleForProductRequest> request);
  DeleteApiDestinationResponse deleteApiDestinationWithOptions(shared_ptr<DeleteApiDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApiDestinationResponse deleteApiDestination(shared_ptr<DeleteApiDestinationRequest> request);
  DeleteConnectionResponse deleteConnectionWithOptions(shared_ptr<DeleteConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConnectionResponse deleteConnection(shared_ptr<DeleteConnectionRequest> request);
  DeleteEventBusResponse deleteEventBusWithOptions(shared_ptr<DeleteEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventBusResponse deleteEventBus(shared_ptr<DeleteEventBusRequest> request);
  DeleteEventSourceResponse deleteEventSourceWithOptions(shared_ptr<DeleteEventSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventSourceResponse deleteEventSource(shared_ptr<DeleteEventSourceRequest> request);
  DeleteEventStreamingResponse deleteEventStreamingWithOptions(shared_ptr<DeleteEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventStreamingResponse deleteEventStreaming(shared_ptr<DeleteEventStreamingRequest> request);
  DeleteRuleResponse deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleResponse deleteRule(shared_ptr<DeleteRuleRequest> request);
  DeleteTargetsResponse deleteTargetsWithOptions(shared_ptr<DeleteTargetsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTargetsResponse deleteTargets(shared_ptr<DeleteTargetsRequest> request);
  DisableRuleResponse disableRuleWithOptions(shared_ptr<DisableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableRuleResponse disableRule(shared_ptr<DisableRuleRequest> request);
  EnableRuleResponse enableRuleWithOptions(shared_ptr<EnableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRuleResponse enableRule(shared_ptr<EnableRuleRequest> request);
  GetApiDestinationResponse getApiDestinationWithOptions(shared_ptr<GetApiDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApiDestinationResponse getApiDestination(shared_ptr<GetApiDestinationRequest> request);
  GetConnectionResponse getConnectionWithOptions(shared_ptr<GetConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionResponse getConnection(shared_ptr<GetConnectionRequest> request);
  GetEventBusResponse getEventBusWithOptions(shared_ptr<GetEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventBusResponse getEventBus(shared_ptr<GetEventBusRequest> request);
  GetEventStreamingResponse getEventStreamingWithOptions(shared_ptr<GetEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventStreamingResponse getEventStreaming(shared_ptr<GetEventStreamingRequest> request);
  GetRuleResponse getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleResponse getRule(shared_ptr<GetRuleRequest> request);
  ListAliyunOfficialEventSourcesResponse listAliyunOfficialEventSourcesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliyunOfficialEventSourcesResponse listAliyunOfficialEventSources();
  ListApiDestinationsResponse listApiDestinationsWithOptions(shared_ptr<ListApiDestinationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApiDestinationsResponse listApiDestinations(shared_ptr<ListApiDestinationsRequest> request);
  ListConnectionsResponse listConnectionsWithOptions(shared_ptr<ListConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectionsResponse listConnections(shared_ptr<ListConnectionsRequest> request);
  ListEventBusesResponse listEventBusesWithOptions(shared_ptr<ListEventBusesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventBusesResponse listEventBuses(shared_ptr<ListEventBusesRequest> request);
  ListEventStreamingsResponse listEventStreamingsWithOptions(shared_ptr<ListEventStreamingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventStreamingsResponse listEventStreamings(shared_ptr<ListEventStreamingsRequest> request);
  ListRulesResponse listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<ListRulesRequest> request);
  ListTargetsResponse listTargetsWithOptions(shared_ptr<ListTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTargetsResponse listTargets(shared_ptr<ListTargetsRequest> request);
  ListUserDefinedEventSourcesResponse listUserDefinedEventSourcesWithOptions(shared_ptr<ListUserDefinedEventSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserDefinedEventSourcesResponse listUserDefinedEventSources(shared_ptr<ListUserDefinedEventSourcesRequest> request);
  PauseEventStreamingResponse pauseEventStreamingWithOptions(shared_ptr<PauseEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseEventStreamingResponse pauseEventStreaming(shared_ptr<PauseEventStreamingRequest> request);
  PutTargetsResponse putTargetsWithOptions(shared_ptr<PutTargetsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutTargetsResponse putTargets(shared_ptr<PutTargetsRequest> request);
  QueryEventResponse queryEventWithOptions(shared_ptr<QueryEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventResponse queryEvent(shared_ptr<QueryEventRequest> request);
  QueryEventTracesResponse queryEventTracesWithOptions(shared_ptr<QueryEventTracesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventTracesResponse queryEventTraces(shared_ptr<QueryEventTracesRequest> request);
  QueryTracedEventByEventIdResponse queryTracedEventByEventIdWithOptions(shared_ptr<QueryTracedEventByEventIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTracedEventByEventIdResponse queryTracedEventByEventId(shared_ptr<QueryTracedEventByEventIdRequest> request);
  QueryTracedEventsResponse queryTracedEventsWithOptions(shared_ptr<QueryTracedEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTracedEventsResponse queryTracedEvents(shared_ptr<QueryTracedEventsRequest> request);
  StartEventStreamingResponse startEventStreamingWithOptions(shared_ptr<StartEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartEventStreamingResponse startEventStreaming(shared_ptr<StartEventStreamingRequest> request);
  TestEventPatternResponse testEventPatternWithOptions(shared_ptr<TestEventPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestEventPatternResponse testEventPattern(shared_ptr<TestEventPatternRequest> request);
  UpdateApiDestinationResponse updateApiDestinationWithOptions(shared_ptr<UpdateApiDestinationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApiDestinationResponse updateApiDestination(shared_ptr<UpdateApiDestinationRequest> request);
  UpdateConnectionResponse updateConnectionWithOptions(shared_ptr<UpdateConnectionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConnectionResponse updateConnection(shared_ptr<UpdateConnectionRequest> request);
  UpdateEventBusResponse updateEventBusWithOptions(shared_ptr<UpdateEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEventBusResponse updateEventBus(shared_ptr<UpdateEventBusRequest> request);
  UpdateEventSourceResponse updateEventSourceWithOptions(shared_ptr<UpdateEventSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEventSourceResponse updateEventSource(shared_ptr<UpdateEventSourceRequest> request);
  UpdateEventStreamingResponse updateEventStreamingWithOptions(shared_ptr<UpdateEventStreamingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEventStreamingResponse updateEventStreaming(shared_ptr<UpdateEventStreamingRequest> request);
  UpdateRuleResponse updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRuleResponse updateRule(shared_ptr<UpdateRuleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eventbridge20200401

#endif

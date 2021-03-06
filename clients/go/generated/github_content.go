/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package swagger

type GithubContent struct {

	Name string `json:"name,omitempty"`

	Sha string `json:"sha,omitempty"`

	Class string `json:"_class,omitempty"`

	Repo string `json:"repo,omitempty"`

	Size int32 `json:"size,omitempty"`

	Owner string `json:"owner,omitempty"`

	Path string `json:"path,omitempty"`

	Base64Data string `json:"base64Data,omitempty"`
}

import React, { Component } from 'react';

class API extends Component {

    constructor()
    {
        super()
        this.state={status:"padding",data:""}
    }

  componentDidMount(): void {
      setTimeout(() => {
        fetch("https://jsonplaceholder.typicode.com/posts").then((resp)=>resp.json()).then((res)=>{console.log(res);
        this.setState({status:"completed",data:res})

      let data=''
        res.forEach(ele => {
            data+=`<tr>
                <td>${ele.id}</td>
                <td>${ele.title}</td>
                <td>${ele.body}</td>
                
            <tr/>`
        });
        document.querySelector('#dis').innerHTML=data
        })
      },2000);
  }

    render() {
        
        return (
            <>
              <div className='container'>   
                <div className='row'>
                    <div className='col'>
                        <h1>{this.state.status}</h1>

                        <table className='table border'>
                            <tr>
                                <td>id</td>
                                <td>title</td>
                                <td>body</td>
                            </tr>
                            <tbody id='dis'></tbody>

                        </table>
                    </div>
                </div> 
                </div>  
            </>
        );
    }
}

export default API;
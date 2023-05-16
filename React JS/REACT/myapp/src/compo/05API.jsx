import React, { Component } from 'react';

class API extends Component {
    constructor()
    {
        super();
        this.state={status:'pending',data:''}
    }

    componentDidMount(): void {
        setTimeout(() => {
            fetch("https://jsonplaceholder.typicode.com/albums").then((res)=>res.json()).then((RES)=>{
                console.log(RES);
                this.setState({status:"completed",data:RES})
                // let out =document.getElementById('display')
               let htmldata=''
              
                RES.forEach(element => {
                   htmldata+=`
                    <tr>
                    <td>${element.id}</td>
                    <td>${element.userId}</td>
                    <td>${element.title}</td>

                    <tr/>
                `
                   
                });
                // out.innerHTML=htmldata
                document.querySelector('#display').innerHTML=htmldata
                


                
            }).catch((err)=>{
                console.log(err);
                
            })
        }, 3000);
    }
    render() {
        return (
            <div>
                <div className="container">
                    <div className="row">
                        <div className="col">
                            <h1>{this.state.status}</h1>
                           {/* <div>{this.state.status=='completed'?JSON.stringify(this.state.data):"no data found"}</div> */}

                            <table className='table border'>
                                <tr>
                                    <td>ID</td>
                                    <td>Userid</td>
                                    <td>title</td>
                                    
                                    
                                </tr>
                                <tbody id='display'></tbody>
                            </table>

                        </div>
                    </div>
                </div>
            </div>
        );
    }
}

export default API;